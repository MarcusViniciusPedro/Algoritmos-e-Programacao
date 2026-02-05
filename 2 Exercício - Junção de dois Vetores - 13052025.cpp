#include <stdio.h>

int main (){
	
	int A[7], B[7], C[7][2], i, j;
	
	for(i = 0; i <= 6; ++i){
		printf("\nDigite %i valor: ", i + 1);
		scanf("%i", &A[i]);
	}
	for(i = 0; i <= 6; ++i){
		printf("\nDigite %i valor: ", i + 1);
		scanf("%i", &B[i]);
	}
	for(i = 0; i <= 6; ++i)
	    for(j = 0; j <= 1; ++j){
		if(j == 0){
			C[i][j] = A[i];
		}
		if(j == 1){
			C[i][j] = B[i];
		}
	}
	for(i = 0; i <= 6; ++i)
	    for(j = 0; j <= 1; ++j){
        	printf("\n%i", C[i][j]);
    }
	return 0;
}
