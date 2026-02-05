#include <stdio.h>

int main(){
	float val, tax, tem;
	int calculo(float, float, float);
	
	printf("Entre com o valor: ");
	scanf("%f", &val);
	
	printf("\nEntre com a taxa: ");
	scanf("%f", &tax);
	
	printf("\nEntre com o tempo: ");
	scanf("%f", &tem);
	
	calculo(val, tax, tem);
}

int calculo (float val1, float tax1, float tem1){
	float prest;
	
	prest = val1 + (val1 * (tax1 / 100) * tem1);
	printf("\nA prestacao e: RS%5.2f", prest);
}
