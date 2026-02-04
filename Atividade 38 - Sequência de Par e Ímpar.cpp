#include <stdio.h>

int main (){
	
	int cont = 1;
	
	while (cont <= 20){
		
		if (cont %2 == 0){ //Quando divisível por 2 será apresentado como par
		printf("%.2i - par\n", cont);
		cont = cont + 1;
	    }
		else { //Qualquer outro valor será apresentado como ímpar
		printf("%.2i - impar\n", cont);
		cont = cont + 1;
	    }
	}
	return 0;
}

