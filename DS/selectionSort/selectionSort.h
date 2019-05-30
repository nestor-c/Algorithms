#include <iostream>
using namespace std;

void printArr(int arr[],int n){
	for (int i=0;i<n;i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}
void selectionSort(int arr[],int n){
	int smallIndex;
	int pass, j;
	int temp;
	
	for (pass=0; pass<n-1;pass++){
		cout << "Pass " << pass << endl;
		smallIndex = pass;
		int k = 1;
		
		for (j = pass+1; j<n; j++){
			// cout << "	Comparing " << arr[pass] << " with " << arr[j] << endl; 	
			if (arr[j] < arr[pass]){
				smallIndex = j;
				if (smallIndex != pass){
					temp = arr[pass];
					// cout << "	Switching " << arr[pass] << " with ";
					arr[pass]=arr[smallIndex];
					// cout << arr[smallIndex] << endl;
					arr[smallIndex]=temp;
					// cout << "		New array" << endl;
					// cout << "		";
					//printArr(arr,15);
					// cout << endl;
				}	
			}
		}
	}
}


