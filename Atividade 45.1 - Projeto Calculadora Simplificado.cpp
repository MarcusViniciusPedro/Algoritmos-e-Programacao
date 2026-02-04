#include <stdio.h>
#include <stdlib.h> // Para a função exit()

int main() {
    char operacao;
    float num1, num2, resultado;

    for (;;) { // Loop infinito até que o usuário escolha 'S'
        printf("\nEscolha a operação (+, -, *, / ou S para sair): ");
        scanf(" %c", &operacao); // Note o espaço antes de %c para consumir espaços em branco

        switch (operacao) {
            case '+':
            case '-':
            case '*':
            case '/':
                printf("Digite o primeiro número: ");
                scanf("%f", &num1);
                printf("Digite o segundo número: ");
                scanf("%f", &num2);

                switch (operacao) {
                    case '+':
                        resultado = num1 + num2;
                        printf("Resultado: %.2f\n", resultado);
                        break;
                    case '-':
                        resultado = num1 - num2;
                        printf("Resultado: %.2f\n", resultado);
                        break;
                    case '*':
                        resultado = num1 * num2;
                        printf("Resultado: %.2f\n", resultado);
                        break;
                    case '/':
                        if (num2 != 0) {
                            resultado = num1 / num2;
                            printf("Resultado: %.2f\n", resultado);
                        } else {
                            printf("Erro: Divisão por zero!\n");
                        }
                        break;
                }
                break;
            case 'S':
            case 's': // Permite que o usuário digite 'S' ou 's' para sair
                printf("Encerrando a calculadora.\n");
                exit(0); // Encerra o programa com código de sucesso
            default:
                printf("Operação inválida. Por favor, digite +, -, *, / ou S.\n");
        }
    }

    return 0; // Esta linha nunca será alcançada devido ao loop infinito e ao exit()
}
