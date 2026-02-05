#include <stdio.h>

int main (){
	
	int A[12], i, j, x;
	
	printf("Classificacao de Elementos Numericos\n\n"); /*Título da atividade/perfumaria*/
	/*Petição para anexação de valores até 12, inseridos no A[i], de forma a dividir cada pedido no próximo número identificado pelo i + 1*/
	for(i = 0; i <= 11; ++i){
		
		printf("Informe o %i valor: ", i + 1);
		scanf("%d", &A[i]);
	}
	/*Ordenação Bubble Sort para identificação de uma tabela do menor para o maior (Crescente)*/
	for(i = 0; i <= 10; ++i)
	for(j = i+1; j <= 11; ++j){
		
		if(A[i] > A[j]){
			
			x = A[i];
			A[i] =A[j];
			A[j] = x;
		}
	}
	printf("\nOrdem Crescente"); /*Perfumaria*/
	for(i = 0; i <= 11; ++i){
	printf("\n\n A ordem Crescente e %d: %d", i+1, A[i]); /*Resultado da ordem crescente*/
    }
    /*Ordenação Bubble Sort para identificação de uma tabela do maior para o menor (Decrescente)*/
	for(i = 0; i <= 10; ++i)
	for(j = i+1; j <= 11; ++j){
		
		if(A[i] < A[j]){
			
			x = A[i];
			A[i] =A[j];
			A[j] = x;
		}
	}
	printf("\n\nOrdem Decrescente"); /*Perfumaria*/
	for(i = 0; i <= 11; ++i){
	printf("\n\n A ordem Decrescente e %d: %d", i+1, A[i]); /*Resultado da ordem decrescente*/
    }
    
	return 0;
}

