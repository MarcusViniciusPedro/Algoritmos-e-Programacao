#include <stdio.h>

int main (){
	
	int N1, N2, N3;
	
	printf("\nInsira tres numeros inteiro:\n ");
	scanf("%i %i %i", &N1, &N2, &N3);
	printf("Os numeros divisiveis por 2 e 3 sao:\n");
	
	if (N1 % 6 == 0) //Se N1 ao ser dividido por 6 restará 0
	   printf("%i\n", N1);
	
	else if (N2 % 6 == 0) //Se N2 ao ser dividido por 6 restará 0
	   printf("%i\n", N2);
	   
	else if (N3 % 6 == 0) //Se N3 ao ser dividido por 6 restará 0
	   printf("%i\n", N3);

	return 0;
}

