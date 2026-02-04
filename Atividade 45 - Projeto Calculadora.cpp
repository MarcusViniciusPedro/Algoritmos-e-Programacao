#include <stdio.h>
#include <stdlib.h>

main (){
	
	char Op;
	float N1, N2, R;
	
	for (;;){
	
		printf("Escolha entre uma das quatro operacoes(+, -, *, /) ou pressione 'S' para sair:\n");
    	scanf("%c", &Op);
	
	switch (Op){
		case '+':
		case '-':
		case '*':
		case '/':
		
		printf("Digite numero(N1):\n");
		scanf("%f", &N1);
		printf("Digite numero(N2):\n");
		scanf("%f", &N2);
		
		switch (Op){
			
			case '+':
				R = N1 + N2;
				printf("O resultado de %.2f + %.2f e: %.2f\n", N1, N2, R); break;
			
			case '-':
				R = N1 - N2;
				printf("O resultado de %.2f - %.2f e: %.2f\n", N1, N2, R); break;
				
			case '*':
				R = N1 * N2;
				printf("O resultado de %.2f * %.2f e: %.2f\n", N1, N2, R); break;
			
			case '/':
				if(N2 != 0){
				R = N1 / N2;
				printf("O resultado de %.2f / %.2f e: %.2f\n", N1, N2, R);
			    }
			    else {
			    	printf("\nErro: divisao por zero(0).\n");
				} break;
			} break;
		    case 'S':
            case 's': 
                printf("Encerrando a calculadora.\n");
                exit(0);
            default:
                printf("Operacao invalida. Por favor, digite +, -, *, / ou S.\n");	
        }
    }
}
