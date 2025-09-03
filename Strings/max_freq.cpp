#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

char mostFrequent(string str) {
    unordered_map<char,int> freq;
    for (char c : str) freq[c]++;
    char ans = '\0'; int maxFreq = 0;
    for (auto &p : freq) {
        if (p.second > maxFreq) {
            maxFreq = p.second;
            ans = p.first;
        }
    }
    return ans;
}
int main() {
    cout << mostFrequent("success");
}
