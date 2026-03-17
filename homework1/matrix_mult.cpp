#include <iostream>
#define N 10

void matrix_mult(int A[N][N], int B[N][N], int C[N][N]) {

  // Matrix multiplication
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
	for (int k = 0; k<N; k++){
	    C[i][j] += A[i][k] * B[k][j];
	}
     }

  }
}
