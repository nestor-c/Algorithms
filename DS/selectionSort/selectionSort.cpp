#include <iostream>
#include <cstdlib>
#include <time.h>
#include <iomanip>
#include "selectionSort.h"
using namespace std;

int main(){
	int arr[15];
	int i;
	clock_t startTime;
	clock_t stopTime;
	srand(time(NULL));

	cout << endl << "Original array" << endl;
	for (i=0; i<15; i++){
		arr[i] = rand() % 100;
		cout << arr[i] << " ";
	}
	cout << endl << endl;
	startTime = clock();
	selectionSort(arr, 15);
	stopTime = clock();

	cout <<"=======================================" << endl;
	cout << "Sorted array" << endl;
	for (i=0;i<15;i++)
		cout << arr[i] << " ";
	cout << endl << endl;

	cout << "Execution time: " << setprecision(5) << fixed <<(float)(stopTime - startTime)/CLOCKS_PER_SEC << " seconds to sort array"<< endl << endl;
}	


