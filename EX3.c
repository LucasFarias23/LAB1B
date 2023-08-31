#include <stdio.h>

int main() {
    int maximo;

    do {
        printf("Digite o número máximo (ímpar): ");
        scanf("%d", &maximo);
    } while (maximo % 2 == 0);

    for (int i = 1; i <= maximo; i += 2) {
        for (int j = 1; j < i; j++) {
            printf(" ");
        }

        for (int j = i; j <= maximo; j++) {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}
# LAB1B
# LAB1B
