#include <iostream>
#include "ap_fixed.h"
#define SIZE 100

typedef ap_fixed<12,6,AP_RND, AP_SAT> in_d_t;
typedef ap_fixed<13,7,AP_RND, AP_SAT> out_d_t;

void vector_add(in_d_t A[SIZE], in_d_t B[SIZE], out_d_t C[SIZE]) {

    for (int i = 0; i < SIZE; i++) {
#pragma HLS PIPELINE II=1
        C[i] = A[i] + B[i];
    }
}
