#include <stdio.h>

// Função para calcular média
float calcularMedia(float n1, float n2, float n3) {
    return (n1 + n2 + n3) / 3;
}

// Função para classificação
void classificacao(float media) {
    if (media < 0 || media > 10) {
        printf("Media invalida\n");
    } else if (media >= 7) {
        printf("Aluno aprovado\n");
    } else if (media >= 5) {
        printf("Aluno em recuperacao\n");
    } else {
        printf("Aluno reprovado\n");
    }
}

// Função para derivada
void calcularDerivada() {
    int a, b, c;

    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    printf("Digite o valor de c: ");
    scanf("%d", &c);

    printf("Funcao original: f(x) = %dx^2 + %dx + %d\n", a, b, c);

    if (b >= 0) {
        printf("Derivada: f'(x) = %dx + %d\n", 2*a, b);
    } else {
        printf("Derivada: f'(x) = %dx - %d\n", 2*a, -b);
    }
}

int main() {
    int opcao;

    do {
        printf("\n=== MENU ===\n");
        printf("1 - Calcular media\n");
        printf("2 - Classificacao academica\n");
        printf("3 - Calcular derivada\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1: {
                float n1, n2, n3, media;

                printf("Digite 3 notas: ");
                scanf("%f %f %f", &n1, &n2, &n3);

                media = calcularMedia(n1, n2, n3);
                printf("Media = %.2f\n", media);
                break;
            }

            case 2: {
                float media;

                printf("Digite a media: ");
                scanf("%f", &media);

                classificacao(media);
                break;
            }

            case 3:
                calcularDerivada();
                break;

            case 0:
                printf("Saindo...\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }

    } while(opcao != 0);

    return 0;
}