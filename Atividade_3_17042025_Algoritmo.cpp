#include <stdio.h>

int main (){
	
	char RAI[9], RAF[9];
	int map[] = {1, 0, 2, 3, 4, 5, 6, 8, 7};
	
	printf("Insira os numeros do RA: ");
	scanf("%9s", &RAI);

	for(int I = 0; I < 9; ++I){
	    RAF[I] = RAI[map[I]]; 
	}
	RAF[9] = '\0';
			
	printf("\nA nova ordem do RA e: %s\n ", RAF);
	return 0;	
}
