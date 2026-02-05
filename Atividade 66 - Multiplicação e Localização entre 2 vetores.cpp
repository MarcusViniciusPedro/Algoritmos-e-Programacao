#include <stdio.h>

int main (){
	
	int n[8], m[8], i, j, x, a, p, b;
	
	/*Entrada dos valores de n[8]*/
	for(i = 0; i <= 7; ++i){
		printf("\n Digite um numero: ");
		scanf("%d", &n[i]);
		m[i] = n[i] * 5; /*Multiplicação e armazenamento de n[i] em m[i]*/
	}
	/*Bubble Sort de m[i] em comparação ao m[j] passando as informações de um para o outro*/
	for(i = 0; i <= 6; ++i)
	for(j = j + 1; j <= 7; ++j){
		if(m[i] > m[j]){
			x = m[i];
			m[i] = m[j];
			m[j] = x;
		}
	}
	for(j = 0; j <= 7; ++j){
		printf("\n %d", m[j]); /*Exibição de m[j]*/
	}
	/*Pesquisa dos números condescendentes de m[j] ao escrever o número relacionado a multiplicação de 5*/
	printf("\nentre com o numero a ser pesquisado: ");
	scanf("%d", &b);
	j = 0;
	a = 0;
	/*Projeção de onde o número foi encontrado (Ex: localizado em: 1)*/
	while (j <= 7 && a == 0){
		if (m[j] == b){
			a = 1;
		}
		else{
			j = j + 1;
		}
		if (a == 1)
		printf ("\nFoi localizado em: %d", j + 1);
	}
	return 0;
}
