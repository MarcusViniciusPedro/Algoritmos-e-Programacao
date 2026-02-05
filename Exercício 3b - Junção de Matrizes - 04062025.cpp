#include <stdio.h>

void MatrizA(int A[], int valor);
void MatrizB(int B[], int valor);
void juncao(int *A, int *B, int *C, int valorA, int valorB); 
void MatrizC(int *C, int valor);

int i; 

int main() {
    int A[5];
    int B[5];
    int C[10];

    MatrizA(A, 5);
    MatrizB(B, 5);
    juncao(A, B, C, 5, 5);
    MatrizC(C, 10);

    return 0;
}

void MatrizA(int A[], int valor) {
    for (i = 0; i < valor; ++i) {
        printf("Digite o %i valor para A: ", i + 1);
        scanf("%i", &A[i]);
    }
}

void MatrizB(int B[], int valor) {
    for (i = 0; i < valor; ++i) {
        printf("Digite o %i valor para B: ", i + 1);
        scanf("%i", &B[i]);
    }
}


void juncao(int *A, int *B, int *C, int valorA, int valorB) {
   
    for (i = 0; i < valorA; ++i) {
        *(C + i) = *(A + i); 
    }
    for (i = 0; i < valorB; ++i) {
        *(C + valorA + i) = *(B + i);
    }
}

void MatrizC(int *C, int valor) {
    printf("A matriz C sera:\n");
    for (i = 0; i < valor; ++i) {
        printf("%i\n", *(C + i)); 
    }
}
