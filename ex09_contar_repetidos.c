#include <stdio.h>
#include <stdbool.h>

void ex09_contar_repetidos() {
	int a[15] = { 1, 2, 5, 3, 2, 5, 3, 2, 1, 1, 5, 2, 3, 7, 2 };
	int tamanio = sizeof(a) / sizeof(a[0]);
	int visitado[15] = { 0 };

	for (int i = 0; i < tamanio; i++) {
		// salteo esta iteracion si el indice lo recorri
		if (visitado[i] == 1) {
			continue;
		}

		int contador = 1; 

		// comparo el elemento con el resto de elementos del array
		for (int j = i + 1; j < tamanio; j++) {
			if (a[i] == a[j]) {
				contador++;
				visitado[j] = 1; // marco que el indice fue contado
			}
		}

		printf("El numero %d se repite %d veces.\n", a[i], contador);
		visitado[i] = 1; // marco que el indice actual fue visitado
	}
} 