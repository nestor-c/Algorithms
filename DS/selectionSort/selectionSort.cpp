#include <iostream>
#include <cstdlib>
#include <time.h>
#include "selectionSort.h"
using namespace std;

int main(){
	int arr[15];
	int i;
	srand(time(NULL));

	cout << endl << "Original array" << endl;
	for (i=0; i<15; i++){
		arr[i] = rand() % 100;
		cout << arr[i] << " ";
	}
	cout << endl << endl;
	selectionSort(arr, 15);

	cout << "Sorted array" << endl;
	for (i=0;i<15;i++)
		cout << arr[i] << " ";
	cout << endl;
}	


