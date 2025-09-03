#include <iostream>
#include <algorithm>
using namespace std;

bool areAnagrams(string str1, string str2) {
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    return str1 == str2;
}

int main() {
    string str1, str2;
    cout << "Enter two strings: ";
    cin >> str1 >> str2;

    cout << (areAnagrams(str1, str2) ? "Anagrams" : "Not Anagrams") << endl;
    return 0;
}





// Function to check if two strings are anagrams
bool isAnagram(const string &s1, const string &s2) {
    // Step 1: Check size
    if (s1.size() != s2.size())
        return false;

    // Step 2: Frequency maps
    map<char, int> freq1, freq2;

    for (char ch : s1) freq1[ch]++;   // count for first string
    for (char ch : s2) freq2[ch]++;   // count for second string

    // Step 3: Compare both maps
    return freq1 == freq2;   // STL compares maps key-value wise
}

int main() {
    string str1, str2;
    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;

    if (isAnagram(str1, str2))
        cout << "Yes, they are Anagrams" << endl;
    else
        cout << "No, not Anagrams" << endl;

    return 0;
}
