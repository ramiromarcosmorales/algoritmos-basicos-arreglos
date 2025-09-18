#include <stdio.h>

void ex07_busqueda_lineal() {
	int a[15] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
	int buscar = 19;
	int indice = -1;

	for (int i = 0; i < 15; i++) {
		if (a[i] == buscar) {
			indice = i;
			break;
		}
	}

	if (indice != -1) {
		printf("El numero fue encontrado en la posicion: %d", indice);
	} else {
		printf("El numero no fue encontrado en el vector");
	}
}