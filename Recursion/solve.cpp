#include <bits/stdc++.h>

using namespace std;
// f(n) = f(n -1) + f(n - 2 ) --> fibo

// 1st - 0
// 2nd - 1
// 3rd - 1
int fibo(int n){
	//base
	if(n <= 1) return n;
    

	int last = fibo(n - 1);
	int slast = fibo(n - 2);

	return last + slast;

}

int main(){
	int n;
	cin >> n;

	cout << "Fibo: " << fibo(n) << endl;

	return 0;
}