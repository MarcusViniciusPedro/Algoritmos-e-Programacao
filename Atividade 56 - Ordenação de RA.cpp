#include <stdio.h>

int main (){
	
	char RA1[9], RA2[9];
	int map[] = {0, 1, 2, 3, 4, 8, 7, 6, 5};
	
	printf("Insira os numeros do RA: ");
	scanf("%9s", &RA1);

	for(int I = 0; I < 9; ++I){
	    RA2[I] = RA1[map[I]]; 
	}
	RA2[9] = '\0';
			
	printf("\nA nova ordem do RA e: %s\n ", RA2);
	return 0;	
}
