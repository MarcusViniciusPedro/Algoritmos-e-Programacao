#include <stdio.h>

int main() {
  int num;

  printf("Digite um numero: ");
  scanf("%d", &num);

  if (num % 2 == 0) { //Verifica se o valor é divisível por 2 e o resultado será inteiro, ou seja resto 0
    printf("%d par.\n", num); 
  } 
  else { //Todos os demais valores que não se encaixam na condição if serão lançados para o else
    printf("%d impar.\n", num);
  }

  return 0;
}

