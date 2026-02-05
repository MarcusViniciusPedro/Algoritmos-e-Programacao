#include <stdio.h>

int main (){
	
	int A[7], B[7], C[7][2], i, j;
	
	for(i = 0; i <= 6; ++i){
		printf("\nDigite %i valor [A]: ", i + 1);
		scanf("%i", &A[i]);
	}
	for(i = 0; i <= 6; ++i){
		printf("\nDigite %i valor [B]: ", i + 1);
		scanf("%i", &B[i]);
	}
	for(i = 0; i <= 6; ++i){
	    C[i][0] = A[i];
	    C[i][1] = B[i];
    }
	printf("\ncoluna A\tcoluna B\n");
    for(i = 0; i <= 6; ++i){
    	printf("%d\t\t%d\n", C[i][0], C[i][1]);
	}
	return 0;
}
