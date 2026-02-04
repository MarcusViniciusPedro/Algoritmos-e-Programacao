#include <stdio.h>
#include <math.h>

float arredondarNota(float nota) { //Formula toda a função em um conjunto chamado arredondarNota, para que na main seja necessário, apenas chamar a função
    int parteInteira = (int)nota;
    float parteDecimal = nota - parteInteira;

    if (parteDecimal > 0.5) { //Caso seja formado por decimais ele realizará a operação "nota - parteInteira", por fim somando a parteInteira que sobrou com mais 1, caso o decimal seja maior que 0,5
        return parteInteira + 1;
    } else { //Se o valor for inteiro ou menor que 0,5 retornará, apenas a parte inteira
        return parteInteira;
    }
}

int main() {
    float nota, notaArredondada;

    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);

    notaArredondada = arredondarNota(nota); //Ao criar um float notaArredondada, o código chama a função arredondarNota e o resultado dessa operação é armazenada no notaArredondada

    printf("A nota arredondada é: %.1f\n", notaArredondada);

    return 0;
}

