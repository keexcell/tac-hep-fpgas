#include <iostream>
#define N 10

typedef int in_dt;
typedef int out_dt;

void neural_net(in_dt x[N], in_dt weights[N][N], out_dt y[N]);

int main(){

	in_dt x[N];
	in_dt weights[N][N];
	out_dt y[N];

	for (int i=0; i<N; i++){
	   x[i] = 2*i;
	   for (int j=0; j<N; j++){
		weights[i][j] = i+j;
	   }
	}

	neural_net(x, weights, y);
	
	return 0;
}
