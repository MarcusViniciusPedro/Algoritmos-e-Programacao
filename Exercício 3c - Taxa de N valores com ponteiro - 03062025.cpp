#include <stdio.h>

void calculo (float val, float tax, float tem, float *prest){
	*prest = val + (val * (tax / 100) * tem);
}

int main (){
	float val, tax, tem, prestacao;
	
	printf("Entre com o valor: ");
	scanf("%f", &val);
	printf("Entre com a taxa (em %%): ");
	scanf("%f", &tax);
	printf("Entre com o tempo: ");
	scanf("%f", &tem);
	
	calculo(val, tax, tem, &prestacao);
	
	printf("\nA prestacao e: RS %.2f\n", prestacao);
	return 0;
}
