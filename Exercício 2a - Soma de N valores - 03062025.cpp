#include <stdio.h>

int main(){
	int num;
	
	int soma(int);
	printf("Entre com o numero: ");
	scanf("%i", &num);
	soma(num);
}

int soma(int num1){
	int som, p;
	
	som = 0;
	
	for(p = 1; p <= num1; p = p + 1)
	som = som + p;
	printf("A soma e: %i", som);
}
