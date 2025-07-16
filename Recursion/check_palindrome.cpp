#include <bits/stdc++.h>

using namespace std;

bool checkPalindrome(string str, int l, int r){
	//base 
	if(l >= r) return true;

	if(str[l] != str[r]) return false;

	return checkPalindrome(str, l + 1, r - 1);
}

int main(){

	string str;
	cin >> str;

	bool result = checkPalindrome(str, 0, str.length() - 1 );

	if(result) cout << "Plaindrome" << endl;

	else cout << "Not Plaindrome" << endl ;

	return 0;
}