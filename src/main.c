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

int main() {

    
    return 0;
}