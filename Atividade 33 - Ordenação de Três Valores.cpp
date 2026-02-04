#include <stdio.h>

void ordenar_tres_valores(int *a, int *b, int *c){ //A void será chamada pela função main, essa função é um princípio de Bubble Sort
    int temp;

    if (*a > *b) { //Se a for maior que b
        temp = *a;
        *a = *b;
        *b = temp;
    }
    if (*a > *c) { //Se a maior que c
        temp = *a;
        *a = *c;
        *c = temp;
    }

    if (*b > *c) { //Se b maior que c
        temp = *b;
        *b = *c;
        *c = temp;
    }
}

int main(){
    int num1, num2, num3;

    printf("Digite numero: ");
    scanf("%d", &num1);
    printf("Digite numero: ");
    scanf("%d", &num2);
    printf("Digite numero: ");
    scanf("%d", &num3);

    ordenar_tres_valores(&num1, &num2, &num3); //Função void é chamada nesse instante após os valores serem coletados pelos scanf's

    printf("Numeros ordenados em ordem crescente: %d %d %d", num1, num2, num3);

    return 0;
}

