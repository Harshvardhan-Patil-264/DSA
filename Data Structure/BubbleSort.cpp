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

int main(){
	int n = 6;
	int arr[] = {2, 10, 4, 1, 0 ,5};

	bubbleSort(arr, n);
	for (int i = 0; i < n ; i++){
		cout << arr[i] << " ";
	}
	return 0; 
}