#include <stdio.h>

void ex06_producto_escalar_vectores() {
	int a[5] = { 1,2,3,4,5 };
	int b[5] = { 5, 4, 3, 2, 1 };
	int suma = 0, multiplicacion;

	// iteramos sobre cada valor
	for (int i = 0; i < 5; i++) {
		multiplicacion = a[i] * b[i];
		suma += multiplicacion;
	}

	printf("La suma es: %d", suma);
}