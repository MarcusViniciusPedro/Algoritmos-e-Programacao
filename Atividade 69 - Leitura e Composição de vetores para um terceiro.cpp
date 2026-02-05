#include <stdio.h>

int main (){
	
	int A[2], B[3], C[5], i, x, j;
	
	/*Leitura do vetor A[i] e transferência dos valores contidos nele para o vetor C[i]*/
	for(i = 0; i < 2; ++i){
		printf("\nInforme o %i valor do vetor A:\n ", i + 1);
		scanf("%d", &A[i]);
		C[i] = A[i];
	}
	/*Leitura do vetor B[i] e transferência dos valores contidos nele para o vetor C[i], onde é necessário a condição C[i + n]
	para que o vetor não sobreponha com os valores já existentes nele*/
	for(i = 0; i < 3; ++i){
		printf("\nInforme o %i valor do vetor B:\n ", i + 1);
		scanf("%d", &B[i]);
		C[i + 2] = B[i];
	}
	/*Bubble Sort simples para fazê-lo decrescente*/
	for(i = 0; i <= 3; ++i)
	for(j = i+1; j <= 4; ++j){
		if(C[i] < C[j]){
			x = C[i];
			C[i] = C[j];
			C[j] = x;
		}
	}
	printf("\n\nOrdem Decrescente do Vetor C"); /*Perfumaria*/
	for(i = 0; i <= 4; ++i){
	printf("\nA ordem Decrescente e %d: %d\n", i+1, C[i]); /*Resultado da ordem decrescente*/
	}
	return 0;
}
