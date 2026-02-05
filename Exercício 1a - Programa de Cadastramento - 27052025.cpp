#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct agenda{
		char nome[80], end[120], tel[12], mail[40];
	};
	struct agenda x[5];
	
	int i;
	void cadastro(), pesquisa(), alfabetica(), alterar(), remover();

int main (){
    int e = 1, cod;
	
	while (e != 0){
		printf("\t-----------------\n\t|Programa Agenda|\n\t-----------------\t");
		printf("\n1. Cadastro e Registro\n2. Pesquisa de Registro por Nome\n3. Classificacao Alfabetica\n4. Alteracao de Registro Digitado com Erro\n5. Remover Registro\n6. Sair do Programa\n\nEscolha uma opcao: ");
		scanf("%i", &cod);
		
		getchar();
		system("cls");

		switch(cod){
			case 1: cadastro(); break;
			case 2: pesquisa(); break;
			case 3: alfabetica(); break;
			case 4: alterar(); break;			   
		    case 5: remover(); break;
			case 6: return 0;
			default: printf("\nOpcao invalida!\n");	
		}
    }
}
void cadastro(){
	for(i = 0; i < 5; ++i){
		printf("Cadastro e Registro\n");
			printf("%do Nome: ", i + 1);
			fgets(x[i].nome, 80, stdin);
			fflush(stdin);
			printf("Endereco: ");
			fgets(x[i].end, 120, stdin);
			fflush(stdin);
			printf("Telefone: ");
			fgets(x[i].tel, 12, stdin);
			fflush(stdin);
			printf("E-Mail: ");
			fgets(x[i].mail, 40, stdin);
			
			getchar();
			system("cls");
	}
}
void pesquisa(){
    int flag = 0;
    char pesq[80], alt[80];
	printf("Digite o Nome do cadastrado: ");
	fgets(pesq, 80, stdin);
	alt[strcspn(pesq, "\n")] = '\0';				
	getchar();
					
	for(i = 0; i < 5; ++i){
	if(strcmp(pesq, x[i].nome)){
		flag = 1;
		break;
	    }
    }
	system("cls");
					
	if (flag){
		printf("O cadastro do nome %s esta na posicao %i.\n", pesq, i + 1);
	}
	else{
		printf("O cadastro do nome %s nao foi encontrado.\n", pesq);
	}
	getchar();
	system("cls");
}
void alfabetica(){
	int j;
	
	for(i = 0; i < 4; ++i){
		for(j = i + 1; j < 5; ++j){
		if(strcmp(x[i].nome, x[j].nome) > 0){
							
		struct agenda temp = x[i];
		x[i] = x[j];
	    x[j] = temp;
		    }
	    }
    }	
printf("Ordem Alfabetica:\n");
				
    for(i = 0; i < 5; ++i){
		printf("Nome %i: %s\n", i + 1, x[i].nome);
	}
	getchar();
	system("cls");
}
    
void alterar(){
    int flag = 0;
    char alt[80];
    
	printf("Digite o nome do registrado que deseja realizar a alteracao: ");
	fgets(alt, 80, stdin);
	fflush(stdin);
				
	for(i = 0; i < 5; ++i){
	if(strcmp(alt, x[i].nome) == 0){
	    flag = 1;
	    break;
	}
}
	if(flag){
	printf("Registro antigo:\n");
	printf("Nome: %s\n", x[i].nome);
    printf("Endereco: %s\n", x[i].end);
    printf(("Telefone: %s\n"), x[i].tel);
	printf("E-Mail: %s\n", x[i].mail);
	getchar();
	system("cls");
					
	printf("Alteracao de Registro\n");
	printf("Nome: ");
	fgets(x[i].nome, 80, stdin);
	fflush(stdin);
    printf("Endereco: ");
	fgets(x[i].end, 120, stdin);
	fflush(stdin);
	printf("Telefone: ");
	fgets(x[i].tel, 12, stdin);
	fflush(stdin);
	printf("E-Mail: ");
	fgets(x[i].mail, 40, stdin);
	fflush(stdin);
	getchar();
	system("cls");
					
	printf("Novo Registro:\n");
	printf("Nome: %s\n", x[i].nome);
	printf("Endereco: %s\n", x[i].end);
	printf(("Telefone: %s\n"), x[i].tel);
	printf("E-Mail: %s\n", x[i].mail);
	}
	else{
	printf("Cadastro nao encontrado.\n");
	}
	getchar();
	system("cls");
}

void remover(){
	char rem[90];
	int acha = 0;
	
	printf("\nEntre com o nome que deseja remover: ");
	fgets(rem, 90, stdin);
	fflush(stdin);
	
	for(i = 0; i < 5; ++i){
		if(strcmp(x[i].nome, rem) == 0){
			acha = 1;
			strcpy(x[i].nome, "");
			printf("\nDelecao efetuada com sucesso!\n");
			break;
		}
	}
	if(!acha)
	printf("\nNome nao encontrado!\n");
	getchar();
	system("cls");	
}
