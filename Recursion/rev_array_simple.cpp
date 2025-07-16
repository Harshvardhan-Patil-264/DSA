#include <bits/stdc++.h>

using namespace std;

void reverse(vector<int>& arr, int l, int r){
	if(l >= r) return;

	swap(arr[l], arr[r]);

	reverse(arr, l + 1, r - 1);
}

void reverse2(vector <int> &arr, int i, int n){
	if(i >= n/2) return;

	swap(arr[i], arr[n - i - 1]);

	reverse2(arr, i + 1, n);
}

int main(){

	int n;
	cin >> n;
 
	vector <int> arr(n);

	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}


	reverse(arr, 0, n-1);

	for(int i = 0; i < n; i++){
		cout << arr[i] << " " ;
	}

	cout << endl;
	reverse2(arr, 0, n);

	for(int i = 0; i < n; i++){
		cout << arr[i] << " " ;
	}

	cout << endl;
	return 0;

}