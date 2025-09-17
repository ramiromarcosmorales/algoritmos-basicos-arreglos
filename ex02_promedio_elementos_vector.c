#include <stdio.h>

void ex02_promedio_elementos_vector() {
	int numeros[15], tamanio, suma = 0;
	double promedio;

	for (int i = 0; i < 15; i++)
	{
		numeros[i] = rand() % 10 + 1;
		suma += numeros[i];
	}

	tamanio = sizeof(numeros) / sizeof(numeros[0]);

	promedio = (double) suma / tamanio;
	
	for (int i = 0; i < tamanio; i++) {
		if (numeros[i] > promedio) {
			printf("Es mayor que el promedio: %d\n", numeros[i]);
		}
	}
}