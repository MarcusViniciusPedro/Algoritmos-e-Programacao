#include <stdio.h>
#include <math.h>

int main(){
	int x, y;
	int potencia(int x, int y);
	
	printf("Entre com o valor da base: ");
	scanf("%i", &x);
	printf("Entre com o expoente: ");
	scanf("%i", &y);
	potencia(x, y);
}

int potencia(int x1, int y1){
	float pot;
	
	pot = pow (x1, y1);
	
	printf("A potencia e: %5.2f", pot);
}
