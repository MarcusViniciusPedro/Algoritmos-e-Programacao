#include <stdio.h>

int main(){
	float C, F;
	
	printf("Temperatura em ºF: ");
	scanf("%f", &F);
	
	C = (F - 32) * 5 / 9;
	printf("A temperatura em ºC e: %.2f", C);
	
	return 0;
}
