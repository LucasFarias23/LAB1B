#include <stdio.h>

int main() {
    int rows, cols;

    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &rows);

    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &cols);

    int matriz[rows][cols];

    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    int escolha;
    printf("Digite 1 para multiplicar uma linha ou 2 para multiplicar uma coluna: ");
    scanf("%d", &escolha);

    if (escolha == 1) {
        int linha, multiplicador;
        printf("Digite o número da linha que deseja multiplicar: ");
        scanf("%d", &linha);
        printf("Digite o valor pelo qual deseja multiplicar a linha: ");
        scanf("%d", &multiplicador);

        if (linha >= 0 && linha < rows) {
            for (int j = 0; j < cols; j++) {
                matriz[linha][j] *= multiplicador;
            }

            printf("Matriz após a multiplicação da linha %d:\n", linha);
        } else {
            printf("Linha inválida.\n");
            return 1;
        }
    } else if (escolha == 2) {
        int coluna, multiplicador;
        printf("Digite o número da coluna que deseja multiplicar: ");
        scanf("%d", &coluna);
        printf("Digite o valor pelo qual deseja multiplicar a coluna: ");
        scanf("%d", &multiplicador);

        if (coluna >= 0 && coluna < cols) {
            for (int i = 0; i < rows; i++) {
                matriz[i][coluna] *= multiplicador;
            }

            printf("Matriz após a multiplicação da coluna %d:\n", coluna);
        } else {
            printf("Coluna inválida.\n");
            return 1;
        }
    } else {
        printf("Escolha inválida.\n");
        return 1;
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
# LAB1B
# LAB1B
