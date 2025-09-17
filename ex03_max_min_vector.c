#include <stdio.h>

void ex03_max_min_vector() {
	int numeros[20], posMin = 0, posMax = 0;

	for (int i = 0; i < 20; i++)
	{
		numeros[i] = rand() % 10;
		if (numeros[i] > numeros[posMax]) {
			posMax = i;
		}

		if (numeros[i] < numeros[posMin]) {
			posMin = i;
		}
	}

	printf("El indice mayor es: %d y su valor es: %d\n", posMax, numeros[posMax]);
	printf("El indice menor es: %d y su valor es: %d\n", posMin, numeros[posMin]);
}