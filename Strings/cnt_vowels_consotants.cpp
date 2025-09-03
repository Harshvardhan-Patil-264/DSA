#include <iostream>
#include <string>
using namespace std;

// Function to count vowels and consonants
void countVowelsConsonants(string str) {
    int vowels = 0, consonants = 0;

    for (int i = 0; i < str.length(); i++) {
        char ch = tolower(str[i]);  // convert to lowercase

        if (ch >= 'a' && ch <= 'z') {  // only alphabets
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    countVowelsConsonants(str); // function call

    return 0;
}
