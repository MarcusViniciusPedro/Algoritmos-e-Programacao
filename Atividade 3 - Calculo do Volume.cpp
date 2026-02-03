#include <stdio.h>
#include <math.h>
//Esse algoritmo coleta duas variáveis float para fazer o cálculo do volume e apresentar no final do programa seu resultado
int main(){
	
	float R, A, V;
	
	printf("Entre com o valor do raio: ");
	scanf("%f", &R);
	printf("Entre com o valor da altura: ");
	scanf("%f", &A);
	
	V = M_PI * R * R * A; //Calculo do Volume
	
	printf("O valor do volume e:\n %.2f", V);
	
	return 0;
}

