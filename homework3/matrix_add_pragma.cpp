#include <iostream>
#define N 10

void matrix_add(int A[N][N], int B[N][N], int C[N][N]) {

#pragma HLS array_partition variable=A complete dim=0
#pragma HLS array_partition variable=B complete dim=0
#pragma HLS array_partition variable=C complete dim=0

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}
