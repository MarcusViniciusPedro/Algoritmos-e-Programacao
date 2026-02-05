#include <stdio.h>

int main (){
	
	int a[10], b[10], i, x;
	x = 9;
	printf("Entre com um numero:\n");
	
	for (i = 0; i <= 9; ++i){
		printf("Numero %i:", i + 1);
		scanf("%i", &a[i]);
		b[x] = a[i];
		x = x - 1;
	}
	printf("A matriz B e:\n ");
	
	for (i = 0; i <= 9; ++i){
		printf("Numero %i:%i\n", i + 1, b[i]); //A matriz é decrescente
	}
	return 0;
}

