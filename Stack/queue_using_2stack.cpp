// ### **12. How to Implement a Queue Using Two Stacks:**

// ### 🔹 **Method 1: Enqueue Costly**

// - **Enqueue:**
//     - Move all elements from `stack1` to `stack2`.
//     - Push new data into `stack1`.
//     - Move everything back from `stack2` to `stack1`.
//     - **(Time: O(n))**
// - **Dequeue:**
//     - Simply pop from `stack1`.
//     - **(Time: O(1))**




#include <iostream>
#include <stack>
using namespace std;

class Queue {
    stack<int> s1, s2; // Two stacks

public:
    // Enqueue operation (costly)
    void enqueue(int x) {
        // Move all elements from s1 to s2
        while (!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }

        // Push new element to s1
        s1.push(x);

        // Move everything back to s1
        while (!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }
    }

    // Dequeue operation
    void dequeue() {
        if (s1.empty()) {
            cout << "Queue is empty\n";
            return;
        }
        cout << "Dequeued: " << s1.top() << "\n";
        s1.pop();
    }

    // Display the queue
    void display() {
        stack<int> temp = s1;
        cout << "Queue: ";
        while (!temp.empty()) {
            cout << temp.top() << " ";
            temp.pop();
        }
        cout << "\n";
    }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();
    q.dequeue();
    q.display();
}
