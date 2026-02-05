#include <stdio.h>

int main (){
	
	int A[4], B[4], i, j, x, a, b;
	
	/*Entrada dos valores de A[4]*/
	for(i = 0; i < 4; ++i){
		printf("\n Digite nota %d: ", i + 1);
		scanf("%d", &A[i]);
	}
	/*Bubble Sort de B[i] em comparação ao B[j] passando as informações de um para o outro com o auxiliar x*/
	for(i = 0; i < 3; ++i)
	for(j = i; j < 4; ++j){
		if(A[i] > A[j]){
			x = A[i];
			A[i] = A[j];
			A[j] = x;
		}
	}
	for(j = 0; j < 4; ++j){
		printf("\n %d", A[j]); /*Exibição de A[j]*/
	}
	/*Pesquisa dos números condescendentes de m[j] ao escrever o número relacionado a multiplicação de 5*/
	printf("\n\nEntre com uma nota para ser pesquisado: ");
	scanf("%d", &b);
	j = 0;
	a = 0;
	/*Projeção de onde o número foi encontrado (Ex: localizado em: 1)*/
	while (j < 4 && a == 0){
		if (A[j] == b){
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
