#include <stdio.h>

int soma(int *num1){
	int som, p;
	som = 0;
	
	for(p = 1; p <= *num1; p = p + 1)
	som = som + p;
	*num1 = som;
}

int main(){
	int num;
	
	printf("Entre com o numero: ");
	scanf("%i", &num);
	soma(&num);
	printf("A soma e: %i", num);
}
