#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define N 10000000

void vector_add(float *out, float *a, float *b, int n) {
	for(int i = 0; i < n; i++){
		out[i] = a[i] + b[i];
	}
}

int main(){
	float *a, *b, *out; 
	
	//Allocate memory
	a   = (float*)malloc(sizeof(float) * N);
	b   = (float*)malloc(sizeof(float) * N);
	out = (float*)malloc(sizeof(float) * N);
	
	//Initialize array
	for(int i = 0; i < N; i++){
		a[i] = 1.0f; b[i] = 2.0f;
	}
	
	clock_t begin = clock();

	//Main function
	vector_add(out, a, b, N);

	clock_t end = clock();
	double time_spent = (double)(end-begin)/CLOCKS_PER_SEC;
	printf("Time: %f s\n", time_spent);
	// Deallocate device memory
	free(a);
	free(b);
	free(out);
}
