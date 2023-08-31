#include <stdio.h>
#include <stdlib.h>

void somarLinhas(int **matriz, int colunas, int linha1, int linha2) {
    for (int j = 0; j < colunas; ++j) {
        matriz[linha2][j] += matriz[linha1][j];
    }
}

void multiplicarLinhas(int **matriz, int colunas, int linha1, int linha2) {
    for (int j = 0; j < colunas; ++j) {
        matriz[linha2][j] *= matriz[linha1][j];
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

    int linha1, linha2;

    printf("Digite o número da primeira linha para somar/multiplicar: ");
    scanf("%d", &linha1);
    printf("Digite o número da segunda linha para receber o resultado: ");
    scanf("%d", &linha2);

    somarLinhas(matriz, colunas, linha1, linha2);
    // Ou, para multiplicação: multiplicarLinhas(matriz, colunas, linha1, linha2);

    printf("Matriz após a operação:\n");
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
