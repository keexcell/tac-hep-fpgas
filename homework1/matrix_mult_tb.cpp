#include <iostream>
#define N 10

void matrix_mult(int A[N][N], int B[N][N], int C[N][N]);

int main() {

    int A[N][N];
    int B[N][N];
    int C[N][N];

    // Initialize matrices
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            A[i][j] = i + j;
            B[i][j] = i - j;
        }
    }
    
    //Call DUT
    matrix_mult(A, B, C);

    return 0;
}
