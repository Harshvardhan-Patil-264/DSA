#include <bits/stdc++.h>
using namespace std;

void findSecondLargest(const vector<int> &arr) {
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int num : arr) {
        if (num > largest) {
            secondLargest = largest;
            largest = num;
        } else if (num > secondLargest && num != largest) {
            secondLargest = num;
        }
    }

    if (secondLargest == INT_MIN)
        cout << "No second largest element (all elements might be same)." << endl;
    else {
        cout << "Largest: " << largest << endl;
        cout << "Second Largest: " << secondLargest << endl;
    }
}

int main() {
    vector<int> arr = {3, 1, 7, 9, 2, 5}; 
    findSecondLargest(arr);
    return 0;
}
