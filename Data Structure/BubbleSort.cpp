#include <bits/stdc++.h>

using namespace std;

void bubbleSort(int arr[], int n){

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++){
			if (arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j + 1] = temp;
			}

		}
	}
}


void resursiveSort(int arr[], int n){

	//base
	if(n == 1) return;

	//recursive
	for(int i = 0; i < n - 1; i++){
		if(arr[i] > arr[i+1]){
			swap(arr[i], arr[i+1]);
		}
	}
	resursiveSort(arr, n - 1);
}

int main(){
	int n = 6;
	int arr[] = {2, 10, 4, 1, 0 ,5};

	bubbleSort(arr, n);
	for (int i = 0; i < n ; i++){
		cout << arr[i] << " ";
	}
	resursiveSort(arr, n);
	for (int i = 0; i < n ; i++){
		cout << arr[i] << " ";
	}
	return 0; 
}