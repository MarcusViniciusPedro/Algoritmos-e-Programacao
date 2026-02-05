#include <stdio.h>

int main (){
	
	int A[2], B[2], i, j, x, a, b;
	
	/*Entrada dos valores de A[3]*/
	for(i = 0; i < 2; ++i){
		printf("\n Digite %d numero: ", i + 1);
		scanf("%d", &A[i]);
		B[i] = A[i] + 2; /*Soma e armazenamento de A[i] em B[i]*/
	}
	/*Bubble Sort de B[i] em comparação ao B[j] passando as informações de um para o outro com o auxiliar x*/
	for(i = 0; i < 1; ++i)
	for(j = j + 1; j < 2; ++j){
		if(B[i] > B[j]){
			x = B[i];
			B[i] = B[j];
			B[j] = x;
		}
	}
	for(j = 0; j < 2; ++j){
		printf("\n %d", B[j]); /*Exibição de B[j]*/
	}
	/*Pesquisa dos números condescendentes de m[j] ao escrever o número relacionado a multiplicação de 5*/
	printf("\n\nentre com o numero a ser pesquisado: ");
	scanf("%d", &b);
	j = 0;
	a = 0;
	/*Projeção de onde o número foi encontrado (Ex: localizado em: 1)*/
	while (j < 2 && a == 0){
		if (B[j] == b){
			a = 1;
		}
		else{
			j = j + 1;
		}
		if (a == 1)
		printf ("\nFoi localizado em: %d", j + 1); /*Identificação espacial de onde o valor foi encontrado pela primeira vez*/
	}
	return 0;
}
