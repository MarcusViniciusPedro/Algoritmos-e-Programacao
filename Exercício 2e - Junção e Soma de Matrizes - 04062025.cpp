#include <stdio.h>

void MatrizA(int A[], int valor);
void MatrizB(int B[], int valor);
void juncao(int A[], int B[], int C[], int valor);
void MatrizC(int C[], int valor);
int i, j, x;

int main() {
    int A[5];
    int B[5];
    int C[5];

    MatrizA(A, 4); 
    MatrizB(B, 4);
    juncao(A, B, C, 4); 
    MatrizC(C, 4);

    return 0;
}

void MatrizA(int A[], int valor) {
    for (i = 0; i <= valor; ++i) {
        printf("Digite o %i valor para A: ", i + 1);
        scanf("%i", &A[i]);
    }
    for (i = 0; i <= valor - 1; ++i)
    for(j = i + 1; j <= valor; ++j){
    	if(A[i] > A[j]){
			
			x = A[i];
			A[i] = A[j];
			A[j] = x;
	    }
    }
}

void MatrizB(int B[], int valor) {
    for (i = 0; i <= valor; ++i) {
        printf("Digite o %i valor para B: ", i + 1);
        scanf("%i", &B[i]);
    }
    for (i = 0; i <= valor - 1; ++i)
    for(j = i + 1; j <= valor; ++j){
    	if(B[i] > B[j]){
			
			x = B[i];
			B[i] = B[j];
			B[j] = x;
	    }
    }
}

void juncao(int A[], int B[], int C[], int valor) {
    for (i = 0; i <= valor; ++i) {
        C[i] = A[i] + B[i];
    }
    for (i = 0; i <= valor - 1; ++i)
    for(j = i + 1; j <= valor; ++j){
    	if(C[i] > C[j]){
			
			x = C[i];
			C[i] = C[j];
			C[j] = x;
	    }
    }
}

void MatrizC(int C[], int valor) {
    printf("A matriz C sera:\n");
    for (i = 0; i <= valor; ++i) { 
        printf("%i\n", C[i]);
    }
}
