#include <stdio.h>

int main (){
 
 float p1,p2,media,atividade;

 printf("Digite a nota da prova 1: ");
 scanf ("%f",&p1);
 printf("Digite a nota da prova 2: ");
 scanf ("%f",&p2);
 printf("Digite a nota das atividades do Semestre: ");
 scanf ("%f",&atividade);

 media=((p1*4)+(p2*4)+(atividade*2))/10; //Cálculo da média com regras de especificação do valor atribuido a cada variável

 printf("A media final e: %3.2f",media);

 return 0;
}


