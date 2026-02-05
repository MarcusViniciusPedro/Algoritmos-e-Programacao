#include <stdio.h>

int main (){
	
	int A[10], B[10][3], i, j;
	
	for(i = 0; i <= 9; ++i){
	printf("Insira %i valor: ", i + 1);
	scanf("%i", &A[i]);
    }
	for(i = 0; i <= 9; ++i){
		B[i][0] = A[i] + 5;
	}

	for(i = 0; i <= 9; ++i){
		int fat = 1;
		for(j = 1; j <= A[i]; ++j){
			fat = fat * j; 
			}
			B[i][1] = fat;
		}
		
	for(i = 0; i <= 9; ++i){
		B[i][2] = A[i] * A[i];
	}
	printf("\nColuna A\tColuna B\tColuna C\n");
	for(i = 0; i <= 9; ++i){
		printf("%i\t\t%i\t\t%i\n", B[i][0], B[i][1], B[i][2]);
	}
	return 0;
}
