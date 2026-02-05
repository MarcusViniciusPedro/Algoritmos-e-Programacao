#include <stdio.h>

int main (){
	
	int A[4], B[4], C[4][2], i;
	
	for(i = 0; i <= 3; ++i){
		printf("Insira o %i valor [A]: ", i + 1);
		scanf("%i", &A[i]);
	}
	for(i = 0; i <= 3; ++i){
		printf("Insira o %i valor [B]: ", i + 1);
		scanf("%i", &B[i]);
	}
	for(i = 0; i <= 3; ++i){
		C[i][0] = A[i] * 2;
		C[i][1] = B[i] - 5;
	}
	printf("\nColuna 1\tColuna 2\n");
	for(i = 0; i <= 3; ++i){
		printf("%i\t\t%i\n", C[i][0], C[i][1]);
	}
	return 0;
}
