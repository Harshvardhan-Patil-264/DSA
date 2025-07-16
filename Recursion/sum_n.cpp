#include <bits/stdc++.h>

using namespace std;


int nsum(int n ){
	//base
	if (n == 0) return 0;

	
	return n + nsum(n - 1);
}

int main()
{
	int n;
	cout << "Enter the nth :- ";
	cin >> n;

	int result = nsum(n);
    cout << "Sum of first " << n << " natural numbers is: " << result << endl;

	return 0;
}