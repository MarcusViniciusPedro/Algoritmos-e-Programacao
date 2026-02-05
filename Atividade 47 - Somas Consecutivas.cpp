#include <stdio.h>
#include <conio.h>

int main (){
	
	int X, soma = 0;
	
	for (X = 1; X <= 20; ++X){ //Serão somados os 20 primeiros valores
		
		soma = soma + X; //O valor de X será somado com a soma 20 vezes
		printf("\nA soma e:%i\n", soma);
	}
	return 0;
}

