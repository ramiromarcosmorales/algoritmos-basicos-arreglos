#include <stdio.h>

void ex11_matriz_invertida() {
    int matriz[3][3] = {
        {1, 2, 3},
        {5, 6, 7},
        {9, 10, 11}
    };

    for (int i = 2; i >= 0; i--) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}