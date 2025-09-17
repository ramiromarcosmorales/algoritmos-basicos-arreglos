#include <stdio.h>

void ex04_vector_invertido() {
	int numeros[10], tamanio = sizeof(numeros) / sizeof(numeros[0]);

	for (int i = 0; i < 10; i++)
	{
		numeros[i] = rand() % 10;
	}

	for (int i = tamanio - 1; i >= 0; i--) {
		printf("%d\n", numeros[i]);
	}
}