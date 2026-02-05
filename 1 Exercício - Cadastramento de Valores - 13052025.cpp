#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
	
	struct agenda{
		char nome[80], end[120], tel[12];
		int id;
	};
	struct agenda x[5];
	int cod, i, j, pesq, flag, e = 1;
	char alt[80], aux[80];
	int ch;
	
	while (e != 0){
		printf("\t-----------------\n\t|Programa Agenda|\n\t-----------------\t");
		printf("\n1. Cadastro e Registro\n2. Pesquisa de Registro\n3. Classificacao Alfabetica\n4. Alteracao de Registro Digitado com Erro\n5. Sair do Menu\n\nEscolha uma opcao: ");
		scanf("%i", &cod);
		
		while((ch = getchar()) != '\n' && ch != EOF); //Limpar buffer
		system("cls");
		
		switch(cod){
			case 1:
				for(i = 0; i < 5; ++i){
					printf("Cadastro e Registro\n");
					printf("%do Nome: ", i + 1);
					fgets(x[i].nome, 80, stdin);
					x[i].nome[strcspn(x[i].nome, "\n")] = '\0';
					printf("Endereco: ");
					fgets(x[i].end, 120, stdin);
					x[i].end[strcspn(x[i].end, "\n")] = '\0';
					printf("Telefone: ");
					fgets(x[i].tel, 12, stdin);
					x[i].tel[strcspn(x[i].tel, "\n")] = '\0';
					printf("Idade: ");
					scanf("%i", &x[i].id);
					
					while((ch = getchar()) != '\n' && ch != EOF);
		            system("cls");
				}
				break;
			
			case 2:
				flag = 0;
					printf("Digite a idade do cadastro: ");
					scanf("%i", &pesq);
					
					while((ch = getchar()) != '\n' && ch != EOF);
					
					for(i = 0; i < 5; ++i){
						if(pesq == x[i].id){
							flag = 1;
							break;
						}
					}
					system("cls");
					
					if (flag){
						printf("O cadastro da idade %i esta na posicao %i.\n", pesq, i + 1);
					}
					else{
						printf("O cadastro da idade %i nao foi encontrado.\n", pesq);
					}
					break;
			
			case 3:
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
				break;
			
			case 4:
			    flag = 0;
				printf("Digite o nome do registro que deseja alterar: ");
				fgets(alt, 80, stdin);
				alt[strcspn(alt, "\n")] = '\0';
				
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
					printf("Idade: %i\n", x[i].id);
					getchar();
					system("cls");
					
					printf("Alteracao de Registro\n");
					printf("Nome: ");
					fgets(x[i].nome, 80, stdin);
					x[i].nome[strcspn(x[i].nome, "\n")] = '\0';
					printf("Endereco: ");
					fgets(x[i].end, 120, stdin);
					x[i].end[strcspn(x[i].end, "\n")] = '\0';
					printf("Telefone: ");
					fgets(x[i].tel, 12, stdin);
					x[i].tel[strcspn(x[i].tel, "\n")] = '\0';
					printf("Idade: ");
					scanf("%i", &x[i].id);
					
					while((ch = getchar()) != '\n' && ch != EOF);
					system("cls");
					
					printf("Novo Registro:\n");
					printf("Nome: %s\n", x[i].nome);
					printf("Endereco: %s\n", x[i].end);
					printf(("Telefone: %s\n"), x[i].tel);
					printf("Idade: %i\n", x[i].id);
					}
				else{
					printf("Cadastro nao encontrado.\n");
				}
				break;
				
				default:
				printf("Codigo invalido. Tente novamente.\n");
				break;	
		}
		printf("\nPara sair - 0\nPara continuar - 1\nDeseja continuar no programa? [0] ou [1]?");
		scanf("%i", &e);
		
		while((ch = getchar()) != '\n' && ch != EOF);
		system("cls");
	}
	return 0;
}
