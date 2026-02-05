#include <stdio.h>

int main (){
	
	int a[6], b[6], c[6], i;
	
	printf("Digite os dados da primeira matriz:\n");
	for (i = 1; i <= 5; ++i){
		scanf("%i", &a[i]);
	}
	
	printf("Digite os dados da segunda matriz:\n");
	for (i = 1; i <= 5; ++i){
		scanf("%i", &b[i]);
		c[i] = a[i] - b[i];
    }
    
    printf("A matriz C e:\n");
    for (i = 1; i <= 5; ++i){
    	printf("%i\n", c[i]);
	}
	return 0;
}
