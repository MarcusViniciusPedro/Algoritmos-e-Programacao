#include <stdio.h>

int main (){
  
  float area,volume,raio;

  printf("Digite o raio da esfera: ");
  scanf ("%f",&raio);

  volume=(4/3)*3.1416*(raio*raio*raio); //Fórmula do volume da esfera

  area=4*3.1416*(raio*raio); //Fórmula do raio da esfera

  printf("O volume da esfera e: %3.2f",volume);
  printf("\nA area da esfera e: %3.2f",area);

  return 0;
}


