#include <iostream>
#define N 64

//allow for changing data types
typedef int in_dt;
typedef int out_dt;

//function prototype
void vector_arithmetic(in_dt A[N], in_dt B[N], out_dt C[N], out_dt D[N], out_dt E[N]);

int main(){

	//create objects
	in_dt A[N];
	in_dt B[N];
	out_dt C[N];
	out_dt D[N];
	out_dt E[N];

	//initialize inputs
	for (int i=0; i<N; i++){
		A[i] = i;
		B[i] = 2*i;
	}

	//call DUT
	vector_arithmetic(A,B,C,D,E);

	//verify results
	int errors = 0;
	for (int i=0; i<N; i++){
                if (C[i] != A[i] + B[i]){
			errors++;
		}
                if (D[i] != A[i] * B[i]){
			errors++;
		}
                if (E[i] != (A[i] + B[i]) * (A[i] - B[i])){
			errors++;
		}
	}
}
