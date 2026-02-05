#include <stdio.h>
#include <math.h>

void potencia(int *base, int *expoente){
	*base = (int)pow((double)(*base), (double)(*expoente));
}

int main(){
	int x, y;
	
	printf("Entre com o valor da base: ");
	scanf("%d", &x);
	printf("Entre com o expoente: ");
	scanf("%d", &y);
	
	potencia(&x, &y);
	
	printf("A potencia e: %d\n", x);
	return 0;
}
