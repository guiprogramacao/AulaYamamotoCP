#include "stdio.h"

int main() {
    float nota1, nota2, media; //Faltou o ";" no final das variáveis

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2); //Faltou o "E" comercial antes do nota 2

    media = (nota1 + nota2) / 2; //Falta dos parênteses no nota1 e nota 2 para respeitar as regras matemáticas na hora do calculo da média

    if (media >= 6 && media <= 10) { // Não especificava o intervalo
        printf("Aluno aprovado\n"); 
    } else {
        printf("Aluno reprovado\n");
    }

    return 0;
}