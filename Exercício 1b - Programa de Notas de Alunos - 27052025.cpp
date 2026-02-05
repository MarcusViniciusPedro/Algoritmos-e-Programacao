#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct aluno{
		char nome[80];
		int nota; 
	};
	struct aluno x[5];
	
	int i;
	void cadastro(), alfabetica(), correcao(), pesquisa(), aprovado(), reprovado();

int main (){
    int e = 1, cod;
	
	while (e != 0){
		printf("\t-----------------------\n\t|Programa Alunos/Notas|\n\t-----------------------\t");
		printf("\n1. Cadastro de Aluno e Registro de Nota\n2. Classificacao Alfabetica dos Alunos\n3. Correcao de Cadastros e Registros\n4. Pesquisa de Aluno por Nome\n5. Alunos Aprovados\n6. Alunos Reprovados \n7. Sair do Programa\n\nEscolha uma opcao: ");
		scanf("%i", &cod);
		
		getchar();
		system("cls");

		switch(cod){
			case 1: cadastro(); break;
			case 2: alfabetica(); break;
			case 3: correcao(); break;
			case 4: pesquisa(); break;			   
		    case 5: aprovado(); break;
		    case 6: reprovado(); break;
			case 7: return 0;
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
			printf("Nota: ");
			scanf("%i", &x[i].nota);
			fflush(stdin);
			getchar();
			system("cls");
	}
}
void alfabetica(){
	int j;
	
	for(i = 0; i < 4; ++i){
		for(j = i + 1; j < 5; ++j){
		if(strcmp(x[i].nome, x[j].nome) > 0){
							
		struct aluno temp = x[i];
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
void correcao(){
    int flag = 0;
    char alt[80];
    
	printf("Digite o nome do aluno que deseja realizar mudancas: ");
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
	printf("Nome: %s", x[i].nome);
    printf("Nota: %i\n", x[i].nota);
					
	printf("\nAlteracao de Registro:\n");
	printf("Nome: ");
	fgets(x[i].nome, 80, stdin);
	fflush(stdin);
    printf("Nota: ");
    scanf("%i", &x[i].nota);

	getchar();
	system("cls");
					
	printf("Novo Registro:\n");
	printf("Nome: %s", x[i].nome);
	printf("Nota: %i\n", x[i].nota);
	}
	else{
	printf("Aluno nao encontrado.\n");
	}
	getchar();
	system("cls");
}
void pesquisa(){
    int flag = 0;
    char pesq[80];
    
	printf("Digite o Nome do Aluno: ");
	fgets(pesq, 80, stdin);
	fflush(stdin);				
	getchar();
					
	for(i = 0; i < 5; ++i){
	if(strcmp(pesq, x[i].nome)){
		flag = 1;
		break;
	    }
    }
	system("cls");
					
	if (flag){
		printf("O Aluno portador do nome %s esta na posicao %i.\n", pesq, i + 1);
	}
	else{
		printf("O Aluno portador do nome %s nao foi encontrado.\n", pesq);
	}
	getchar();
	system("cls");
}
void aprovado(){
	
	for(i = 0; i < 5; ++i){
		if(x[i].nota >= 7){
			printf("> O aluno(a) %s foi aprovado(a). Nota: %i\n", x[i].nome, x[i].nota);
		}
	}
	getchar();
	system("cls");
}
void reprovado(){
	
	for(i = 0; i < 5; ++i){
		if(x[i].nota < 7){
			printf("> O aluno(a) %s foi reprovado(a). Nota: %i\n", x[i].nome, x[i].nota);
		}
	}
	getchar();
	system("cls");
}
