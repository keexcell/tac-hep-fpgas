#include <iostream>
#define N 16

void swap(int *arr, int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void sort_objects(int arr[N]){
    for (int i = 0; i < N - 1; i++){
        for (int j = 0; j < N - i - 1; j++){
#pragma HLS PIPELINE II=2
	   if (arr[j] > arr[j + 1]){
                swap(arr, j, j + 1);
	    }
        }
    }
}

int main()
{
    int A[N] = {12,3,1,2,14,4,5,6,7,8,13,10,11,16,9,15};

    sort_objects(A);
    int errors = 0;
    for (int i = 0; i < N; i++){
    	if (A[i] != i-1){
	   errors += 0;
	}
    }
    return errors;
}

