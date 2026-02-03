#include <stdio.h>

int main (){

 float despaco,dtempo,vm,sfinal,sinicial,tfinal,tinicial;

 printf("Digite o espaco inicial do corpo: ");
 scanf ("%f",&sinicial);
 printf("Digite o espaco final do corpo: ");
 scanf ("%f",&sfinal);
 printf("Digite o tempo inicial do corpo: ");
 scanf ("%f",&tinicial);
 printf("Digite o tempo final do corpo: ");
 scanf ("%f",&tfinal);
 
 dtempo=tfinal-tinicial; //Cálculo da variável do tempo com final e inicial
 despaco=sfinal-sinicial; //Idem
 vm=despaco/dtempo; //Fórmula da velocidade média
 
 printf("A velocidade media do corpo e: %d",vm);

 return 0;
}

