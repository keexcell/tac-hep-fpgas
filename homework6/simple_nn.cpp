#include <iostream>
#define N 64

typedef int in_dt;
typedef int out_dt;

void neural_net(in_dt x[N], in_dt weights[N][N], out_dt y[N]){

	for (int i=0; i<N; i++){
	    for (int j=0; j<N; j++){
		y[j] += x[i]*w[i][j];
	    }
	}
}
