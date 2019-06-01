#include <iostream>

int seqSearch(int arr[],int first, int last, int target){
    for (int i=first; i<last;i++){
        if (arr[i]==target){
            return i;
        }
    }
    return last; 
}
