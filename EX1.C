#include <stdio.h>

int main() {
    int n; 
    printf("Digite o tamanho da matriz quadrada: ");
    scanf("%d", &n);

    int matriz[n][n]; 
    int menorNumero = 0;
    int linhaMenorNumero = 0;

    printf("Digite os elementos da matriz(COM VIRGULA):\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);

            if (i == 0 && j == 0) {
                menorNumero = matriz[i][j];
            } else if (matriz[i][j] < menorNumero) {
                menorNumero = matriz[i][j];
                linhaMenorNumero = i;
            }
        }
    }

    printf("A linha com o menor número (%d) é a linha %d.\n", menorNumero, linhaMenorNumero + 1);

    return 0;
}

# LAB1B
