#include <stdio.h>
#include <math.h>

int main(){
	
	float x1, x2, i, cont;
	
	i = 1; x1 = 0; x2 = 1;

	do{
		printf ("\n %.2f", i);
		i = x1 + x2;
		x1 = x2;
		x2 = i;
		cont = cont + 1;
    }
	while (cont <= 14);
	
	return 0;
}
