#include <stdio.h>
#include <stdlib.h>

void multiplicarLinhaPorNumero(int **matriz, int linha, int colunas, int numero) {
    for (int j = 0; j < colunas; ++j) {
        matriz[linha][j] *= numero;
    }
}

void multiplicarColunaPorNumero(int **matriz, int linhas, int coluna, int numero) {
    for (int i = 0; i < linhas; ++i) {
        matriz[i][coluna] *= numero;
    }
}

int main() {
    int linhas, colunas;

    printf("Digite o número de linhas: ");
    scanf("%d", &linhas);
    printf("Digite o número de colunas: ");
    scanf("%d", &colunas);

    int **matriz = (int **)malloc(linhas * sizeof(int *));
    for (int i = 0; i < linhas; ++i) {
        matriz[i] = (int *)malloc(colunas * sizeof(int));
        for (int j = 0; j < colunas; ++j) {
            printf("Digite o elemento na posição (%d, %d): ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    int linha, coluna, numero;

    printf("Digite o número da linha que deseja multiplicar: ");
    scanf("%d", &linha);
    printf("Digite o número que deseja multiplicar a linha por: ");
    scanf("%d", &numero);
    multiplicarLinhaPorNumero(matriz, linha, colunas, numero);

    printf("Digite o número da coluna que deseja multiplicar: ");
    scanf("%d", &coluna);
    printf("Digite o número que deseja multiplicar a coluna por: ");
    scanf("%d", &numero);
    multiplicarColunaPorNumero(matriz, linhas, coluna, numero);

    printf("Matriz após multiplicação da linha e da coluna:\n");
    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Libera memória
    for (int i = 0; i < linhas; ++i) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}
# LAB1B
# LAB1B
