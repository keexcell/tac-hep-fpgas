#include <iostream>
#define N 64

typedef int in_dt;
typedef int out_dt;

void vector_arithmetic(in_dt A[N], in_dt B[N], out_dt C[N], out_dt D[N], out_dt E[N]){

	//#pragma HLS interface mode=m_axi port=A
	//#pragma HLS interface mode=m_axi port=B
	//#pragma HLS interface mode=m_axi port=C
	//#pragma HLS interface mode=m_axi port=D
	//#pragma HLS interface mode=m_axi port=E
	//#pragma HLS interface mode=m_axi port=return

	//#pragma HLS array_partition variable=A block factor=4
        //#pragma HLS array_partition variable=B block factor=4
        //#pragma HLS array_partition variable=C block factor=4
        //#pragma HLS array_partition variable=D block factor=4
        //#pragma HLS array_partition variable=E block factor=4

	#pragma HLS array_reshape variable=A block factor=4
        #pragma HLS array_reshape variable=B block factor=4
	#pragma HLS array_reshape variable=C block factor=4
	#pragma HLS array_reshape variable=D block factor=4
	#pragma HLS array_reshape variable=E block factor=4

	for (int i=0; i<N; i++){
	//#pragma HLS PIPELINE II=1
		C[i] = A[i] + B[i];
		D[i] = A[i] * B[i];
		E[i] = (A[i] + B[i]) * (A[i] - B[i]);
	}
}
