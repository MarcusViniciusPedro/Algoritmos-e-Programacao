#include <stdio.h>

int main (){
	
	char RAV[9], RAC[9];
	int map[] = {0, 1, 7, 6, 4, 5, 2, 3, 8};
	
	printf("Insira os numeros do RAV: ");
	scanf("%9s", &RAV);

	for(int I = 0; I < 9; ++I){
	    RAC[I] = RAV[map[I]]; 
	}
			
	printf("\nA ordem correta (RAC) e respectivamente: %s\n ", RAC);
	return 0;	
}
