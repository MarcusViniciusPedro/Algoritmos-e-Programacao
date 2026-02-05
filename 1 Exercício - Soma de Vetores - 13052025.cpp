#include <stdio.h>

int main (){
	
	int A[5][3], B[5][3], C[5][3], i, j;
	
	for(i = 0; i <= 4; ++i)
	    for(j = 0; j <= 2; ++j){
    printf("Insira %i valor: ", i);
	scanf("%i", &A[i][j]);
    }
	for(i = 0; i <= 4; ++i)
	    for(j = 0; j <= 2; ++j){
	printf("Insira %i valor: ", i);
	scanf("%i", &B[i][j]);
    }
    for(i = 0; i <= 4; ++i)
	    for(j = 0; j <= 2; ++j){
	C[i][j] = A[i][j] + B[i][j];
	printf("\n%i ", C[i][j]);
    }
    return 0;
}
