#include<stdio.h>

int main(){
	
	float AP, LP, AA, LA, QA;
	
	printf("Insira o valor de AP: ");
	scanf("%f", &AP);
	printf("Insira o valor de LP: ");
	scanf("%f", &LP);
	printf("Insira o valor de AA: ");
	scanf("%f", &AA);
	printf("Insira o valor de LA: ");
	scanf("%f", &LA);
	
	QA = (AP * LP) / (AA * LA); //Calcula a quantidade necessária de azulejos a serem "comprados" para X propósito
	
	printf("O valor de QA e:\n %.2f", QA);
	
	return 0;
}


