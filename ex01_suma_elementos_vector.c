#include <stdio.h>
#include <stdlib.h>

void ex01_suma_elementos_vector() {
	int numeros[10];
	int suma = 0;

	for (int i = 0; i < 10; i++)
	{
		numeros[i] = rand() % 10;
		suma += numeros[i];
	}

	printf("Suma: %d\n", suma);
}