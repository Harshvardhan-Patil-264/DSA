#include<bits/stdc++.h>

using namespace std;

int main(){
//     *
//    ***
//   *****
//  *******
// *********
// 	for(int i = 1; i <= 5; i++){

// 		//space
// 		for(int j = 1; j <= 5 - i; j++){
// 			cout << " ";
// 		}
// 		// star
// 		for(int j = 1; j <= i * 2 -1; j++){
// 			cout << "*";
// 		}
// 		for(int j = 1; j <= 5 - i; j++){
// 			cout << " ";
// 		}

// 		cout << endl;

// 	}
int n = 5;
for(int i = 1; i <=2*n - 1; i++){
	int star = i;

	if (i > n) star = 2 * n - i;
	for(int j = 1; j <= star; j++){
		cout << "*";
	}
	
	cout << endl;
}

	return 0;
}

