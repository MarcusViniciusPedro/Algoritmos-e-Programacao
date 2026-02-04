#include <stdio.h>

int main (){
	
	int cont = 1;
	
	do{
		
		if (cont %2 == 0){
		printf("%.2i - par\n", cont);
		cont = cont + 1;
	    }
		else {
		printf("%.2i - impar\n", cont);
		cont = cont + 1;
	    }
	}
	while (cont <= 20);
	
	return 0;
}
