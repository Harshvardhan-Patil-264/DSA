#include <bits/stdc++.h>

using namespace std;

void print1_N(int N){
	//base
	if(N == 0) return;

	//recursion
	cout << N << " \n";

	print1_N(N -1);

}


int main()
{
	int N;
	cout << "Enter nth: ";
	cin >> N;

	print1_N(N);


	return 0;

}