#include <stdio.h>
#include <stdlib.h>

void substituirNegativosPorAbsoluto(int **matriz, int linhas, int colunas) {
    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            if (matriz[i][j] < 0) {
                matriz[i][j] = -matriz[i][j];
            }
        }
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

    substituirNegativosPorAbsoluto(matriz, linhas, colunas);

    printf("Matriz com Números Negativos Substituídos pelo Valor Absoluto:\n");
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
