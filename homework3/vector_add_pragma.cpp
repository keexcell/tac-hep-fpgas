#include <iostream>
#define SIZE 100

void vector_add(int A[SIZE], int B[SIZE], int C[SIZE]) {
#pragma HLS array_partition variable=A complete dim=1
#pragma HLS array_partition variable=B complete dim=1
#pragma HLS array_partition variable=C complete dim=1

    for (int i = 0; i < SIZE; i++) {
#pragma HLS PIPELINE II=1
        C[i] = A[i] + B[i];
    }
}
