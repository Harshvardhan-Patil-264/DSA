//Remove all digits/numbers from a string.

//Remove all whitespaces from a string.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "He110 W0rld 2025";
    string result = "";

    for (int i = 0; i < str.length(); i++) {
        if (!(str[i] >= '0' && str[i] <= '9')) { // not a digit
            result += str[i];
        }
    }

    cout << "After removing digits: " << result << endl;
    return 0;
}



#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "  Nexanova   Protech  ";
    string result = "";

    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ' ') { // skip space
            result += str[i];
        }
    }

    cout << "After removing spaces: " << result << endl;
    return 0;
}
