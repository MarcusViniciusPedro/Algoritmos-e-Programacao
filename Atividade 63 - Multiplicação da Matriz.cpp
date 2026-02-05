#include <stdio.h>

int main (){
	
	int a [8], b[8], i;
	printf("Entre com um numero:\n");
	
	for (i = 0; i <= 7; ++i){
		printf("Numero %i:", i + 1);
		scanf("%i", &a[i]);
		b[i] = a[i] * a[i]; //Multiplica o valor da matriz por ele mesmo
	}
	printf("A matriz B e:\n");
	for (i = 0; i <= 7; ++i){
		printf("%i\n", b[i]);
	}
	return 0;
}

