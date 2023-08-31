#include <stdio.h>
#include <string.h>

void inserirCaractere(char *string, int posicao, char caractere) {
    int comprimento = strlen(string);
    if (posicao >= 0 && posicao <= comprimento) {
        for (int i = comprimento; i > posicao; --i) {
            string[i] = string[i - 1];
        }
        string[posicao] = caractere;
    }
}

int main() {
    char texto[100];
    char caractere;
    int posicao;

    printf("Digite uma string: ");
    scanf("%s", texto);

    printf("Digite o caractere a ser inserido: ");
    scanf(" %c", &caractere);

    printf("Digite a posição onde o caractere será inserido: ");
    scanf("%d", &posicao);

    inserirCaractere(texto, posicao, caractere);

    printf("String após a inserção do caractere: %s\n", texto);

    return 0;
}
# LAB1B
# LAB1B
