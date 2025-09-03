// ### **3. How to Implement a Stack Using Two Queues:**

// ### 🔹 **Method 1: Push Costly**

// - **Push:**
//     - Enqueue new data into `q2`.
//     - Move all elements from `q1` to `q2`.
//     - Swap names of `q1` and `q2`.
//     - **(Time: O(n))**
// - **Pop:**
//     - Dequeue from `q1`.
//     - **(Time: O(1))**




#include <iostream>
#include <queue>
using namespace std;

class Stack {
    queue<int> q1, q2; // Two queues

public:
    // Push operation (costly)
    void push(int x) {
        // Step 1: Push new element into q2
        q2.push(x);

        // Step 2: Move all elements from q1 to q2
        while (!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }

        // Step 3: Swap names of q1 and q2
        swap(q1, q2);
    }

    // Pop operation
    void pop() {
        if (q1.empty()) {
            cout << "Stack is empty\n";
            return;
        }
        cout << "Popped: " << q1.front() << "\n";
        q1.pop();
    }

    // Top operation
    int top() {
        if (q1.empty()) {
            cout << "Stack is empty\n";
            return -1;
        }
        return q1.front();
    }

    // Display stack
    void display() {
        queue<int> temp = q1;
        cout << "Stack: ";
        while (!temp.empty()) {
            cout << temp.front() << " ";
            temp.pop();
        }
        cout << "\n";
    }
};

int main() {
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.display();
    st.pop();
    st.display();
    cout << "Top: " << st.top() << "\n";
}
