#include <stdio.h>

int main (){
	
	int N1, N2;
	
	printf("Insira dois numeros inteiro:\n ");
	scanf("%i %i", &N1, &N2);
	printf("Os numeros divisiveis por 4 ou 5 sao:\n");
	
    if(N1 % 4 == 0 || N1 % 5 == 0) //N1 divisível por 4 ou N1 divisível por 5
	   printf("%i\n", N1);
	if(N2 % 4 == 0 || N2 % 5 == 0) //N2 divisível por 4 ou N2 divisível por 5
	   printf("%i\n", N2);
	else //Qualquer outra alternativa será considerada como um valor não divisível por eles
	   printf("\nNenhum dos dois numeros e divisivel por 4 ou 5.\n");
	   
	return 0;
}



