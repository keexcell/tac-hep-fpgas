#include <iostream>
#include <cstdlib>
#include "ap_fixed.h"
#define SIZE 100

typedef ap_fixed<12,6,AP_RND, AP_SAT> in_d_t;
typedef ap_fixed<13,7,AP_RND, AP_SAT> out_d_t;


// Function prototype
void vector_add(in_d_t A[SIZE], in_d_t B[SIZE], out_d_t C[SIZE]);

int main() {

    in_d_t A[SIZE];
    in_d_t B[SIZE];
    out_d_t C[SIZE];

    // Initialize inputs
    for (int i = 0; i < SIZE; i++) {
        in_d_t j = i;
	A[i] = j;
        B[i] = 2*j;
    }

    // Call DUT
    vector_add(A, B, C);

    // Verify results
    int errors = 0;
    for (int i = 0; i < SIZE; i++) {
        if (C[i] != A[i] + B[i]) {
            errors++;
        }
    }

    if (errors == 0)
        std::cout << "TEST PASSED\n";
    else
        std::cout << "TEST FAILED\n";

    return errors;
}
