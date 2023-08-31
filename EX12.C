#include <stdio.h>
#include <string.h>

int encontrarCaracter(const char *string, char caractere) {
    int comprimento = strlen(string);
    for (int i = 0; i < comprimento; ++i) {
        if (string[i] == caractere) {
            return i;
        }
    }
    return -1; // Retorna -1 se o caractere não for encontrado
}

int main() {
    char texto[100];
    char alvo;

    printf("Digite uma string: ");
    scanf("%s", texto);

    printf("Digite o caractere que deseja encontrar: ");
    scanf(" %c", &alvo);

    int posicao = encontrarCaracter(texto, alvo);

    if (posicao != -1) {
        printf("O caractere '%c' foi encontrado na posição %d da string.\n", alvo, posicao);
    } else {
        printf("O caractere '%c' não foi encontrado na string.\n", alvo);
    }

    return 0;
}
# LAB1B
# LAB1B
