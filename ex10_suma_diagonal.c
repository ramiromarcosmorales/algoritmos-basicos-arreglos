#include <stdio.h>

void ex10_suma_diagonal() {
    int matriz[4][4] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12},
    {13, 14, 15, 16}
    };
    int suma = 0;

    // recorremos cada fila
    for (int i = 0; i < 4; i++) {
        suma += matriz[i][i];
    }

    printf("La suma es: %d", suma);
}