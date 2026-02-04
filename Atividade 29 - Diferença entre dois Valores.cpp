#include <stdio.h>

int main(){
	
	float V1, V2, Va, Vo;
	
	printf("Valor de V1: ");
	scanf("%f", &V1);
	printf("Valor de V2: ");
	scanf("%f", &V2);
	
	if(V1>V2){ //Se V1 for maior que V2
		Va = V1 - V2; //A subtração será V1 - V2 para que o resultado não seja negativo
		printf("Valor: %.2f", Va);
	}
	    if(V1<V2){ //Se V1 for menor que V2
	        Vo = V2 - V1; //A subtração se inverte, para que, novamente não dê negativo
	        printf("Valor: %.2f", Vo);
        }
	   
	return 0;
}

