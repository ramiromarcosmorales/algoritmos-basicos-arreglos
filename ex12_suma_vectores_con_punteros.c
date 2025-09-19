#include <stdio.h>

void ex12_suma_vectores_con_punteros() {
	int numeros[5] = { 10, 15, 20, 25, 30 };
	int suma = 0;

	for (int i = 0; i < 5; i++) {
		suma += *(numeros + i);
	}

	printf("La suma es: %d", suma);
}