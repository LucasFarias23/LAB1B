#include <stdio.h>
#include <string.h>

void removerCaractere(char *string, int posicao) {
    int comprimento = strlen(string);
    if (posicao >= 0 && posicao < comprimento) {
        for (int i = posicao; i < comprimento - 1; ++i) {
            string[i] = string[i + 1];
        }
        string[comprimento - 1] = '\0'; // Define o novo fim da string
    }
}

int main() {
    char texto[100];
    int posicao;

    printf("Digite uma string: ");
    scanf("%s", texto);

    printf("Digite a posição do caractere a ser removido: ");
    scanf("%d", &posicao);

    removerCaractere(texto, posicao);

    printf("String após a remoção do caractere: %s\n", texto);

    return 0;
}
# LAB1B
# LAB1B
