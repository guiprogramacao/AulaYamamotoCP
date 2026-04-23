#include<stdio.h>

float calcularMedia(float n1, float n2, float n3) {
    return (n1 + n2 + n3) / 3;
}

void aprovar (float media){
    if (media>=7 && media<=10){
        printf("Aluno aprovado");
    } else if (media <7 && media >= 5) {
        printf("recuperacao");
    } else {
        printf("reprovado");

    }
}

// Função para derivada
void calcularDerivada() {
    int a; 
    int b;
    int c;
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    printf("Digite o valor de c: ");
    scanf("%d", &c);

    printf("Função original: f(x) = %dx^2 + %dx + %d\n", a, b, c);

    if (b >= 0){
        printf("Derivada: f'(x) = %dx + %d\n", 2*a, b);
    }
     else{
        printf("Derivada: f'(x) = %dx - %d\n", 2*a, -b);
    }
        
}
    
int main() {
    int opcao;

    do {
        printf("\n=== MENU ===\n");
        printf("1 - Calcular média\n");
        printf("2 - Classificação acadêmica\n");
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
                printf("Média = %.2f\n", media);
                break;
            }

            case 2: {
                float media;

                printf("Digite a média: ");
                scanf("%f", &media);

                classificacao(media);
                break;
            }
        } 
    } while(opcao != 0);
    
    return 0;
}