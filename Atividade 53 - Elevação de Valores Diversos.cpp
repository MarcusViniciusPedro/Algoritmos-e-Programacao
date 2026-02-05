#include <stdio.h>

int main(){
	
	int x, n, p, cont;
	
	printf("\nDigite um numero inteiro para a base: ");
	scanf("%d", &x);
	printf("\nDigite um numero positivo para o expoente: ");
	scanf("%d", &n);
	p = 1;
	cont = 0;
	
	while (cont != n){
		
		p = p * x;
		cont = cont + 1;
	}
	
	printf("\nO valor de %d elevado a %d: %d\n", x, n, p);
	
	return 0;
}
