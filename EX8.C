#include <stdio.h>
#include <stdlib.h>

void transporMatriz(int **matriz, int linhas, int colunas, int **transposta) {
    for (int i = 0; i < colunas; ++i) {
        for (int j = 0; j < linhas; ++j) {
            transposta[i][j] = matriz[j][i];
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

    int **transposta = (int **)malloc(colunas * sizeof(int *));
    for (int i = 0; i < colunas; ++i) {
        transposta[i] = (int *)malloc(linhas * sizeof(int));
    }

    transporMatriz(matriz, linhas, colunas, transposta);

    printf("Matriz Original:\n");
    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Matriz Transposta:\n");
    for (int i = 0; i < colunas; ++i) {
        for (int j = 0; j < linhas; ++j) {
            printf("%d ", transposta[i][j]);
        }
        printf("\n");
    }

    // Libera memória
    for (int i = 0; i < linhas; ++i) {
        free(matriz[i]);
    }
    free(matriz);

    for (int i = 0; i < colunas; ++i) {
        free(transposta[i]);
    }
    free(transposta);

    return 0;
}
# LAB1B
# LAB1B
