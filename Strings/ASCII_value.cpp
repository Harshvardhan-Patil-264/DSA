#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "ABC";
    for (char c : str) {
        cout << c << " : " << int(c) << endl;
    }
}
