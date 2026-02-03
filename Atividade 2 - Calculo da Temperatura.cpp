#include <stdio.h>
//A função converte um valor de Fahrenheit (°F) em Graus Celsius 
int main(){
	float C, F;
	
	printf("Temperatura em ºF: ");
	scanf("%f", &F);
	
	C = (F - 32) * 5 / 9; //Formula para conversão
	printf("A temperatura em ºC e: %.2f", C); //Em tela será exibido o valor em Graus Celsius
	
	return 0;
}

