#include <stdio.h>

void Fibo();
int x;

int main(){
	Fibo();
	
	return 0;
}

void Fibo(){
	int num, x1, x2, i, cont;
	
	printf("Digite quantos numeros de Fibonacci deseja visualizar: ");
	scanf("%i", &num);
	
	i = 1; x1 = 0; x2 = 1;

	do{
		printf ("\n %i", i);
		i = x1 + x2;
		x1 = x2;
		x2 = i;
		cont = cont + 1;
    }
	while (cont <= num);
	
}
