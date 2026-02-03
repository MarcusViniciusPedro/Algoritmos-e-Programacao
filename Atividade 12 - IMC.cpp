#include <stdio.h>

int main (){
  
  float imc,massa,altura;

  printf("Digite a massa (kg): ");
  scanf ("%f",&massa);
  printf("Digite a altura (m): ");
  scanf ("%f",&altura);

  imc=massa/(altura*altura); //Formula do Índice de Massa Corporal

  printf("O IMC resultante e: %3.2f",imc);

  return 0;
}

