#include <stdio.h>

int main (){
  
  float dolar,rl;
  
  printf("Digite o valor em Reais para conversao: ");
  scanf ("%f",&rl);
  
  dolar = rl / 2.40; //Conversão de dinheiro em real para dólar
  
  printf("O Valor em Dolares e: %3.2f ", dolar);
  
  return 0;
}

