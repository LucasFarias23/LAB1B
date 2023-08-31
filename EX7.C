#include <stdio.h>
#include <string.h>

struct Pessoa {
    char nome[100];
    int idade;
    float peso;
    float altura;
};

int main() {
    const int numPessoas = 3;
    struct Pessoa pessoas[numPessoas];

    for (int i = 0; i < numPessoas; ++i) {
        printf("Digite os dados da pessoa %d:\n", i + 1);
        printf("Nome: ");
        scanf("%s", pessoas[i].nome);
        printf("Idade: ");
        scanf("%d", &pessoas[i].idade);
        printf("Peso: ");
        scanf("%f", &pessoas[i].peso);
        printf("Altura: ");
        scanf("%f", &pessoas[i].altura);
        printf("\n");
    }

    printf("Detalhes de todas as pessoas:\n");
    for (int i = 0; i < numPessoas; ++i) {
        printf("Pessoa %d:\n", i + 1);
        printf("Nome: %s\n", pessoas[i].nome);
        printf("Idade: %d\n", pessoas[i].idade);
        printf("Peso: %.2f\n", pessoas[i].peso);
        printf("Altura: %.2f\n", pessoas[i].altura);
        printf("\n");
    }

    return 0;
}
# LAB1B
# LAB1B
# LAB1B
# LAB1B
