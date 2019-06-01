#include "seqSearch.h"
#include <cstdlib>
#include <time.h>
#include <iomanip>
using namespace std;
int main(){
    const int N = 10000;
    int arr[N];
    int START = 0, STOP = 16, TARGET = 80, result;

    clock_t startTime;
    clock_t stopTime;
    srand(time(NULL));
    for (int i=0;i<N;i++){
        arr[i] = rand()%100;
    }
    startTime = clock();
    result = seqSearch(arr,START,STOP,TARGET);
    stopTime = clock();
    if (result == STOP){
        cout << "Could not find value " << TARGET << "." << endl;
    } else {
        cout << "Found value in index " << result << endl;
    }        
        cout << "Execution time: " << setprecision(10) << fixed << (float)(stopTime - startTime)/(CLOCKS_PER_SEC) << " seconds to search for target" << endl << endl;
        return 0;
}