#include <stdio.h>

void ex08_bubble_sort_asc() {
	int a[10] = { 55, 10, 25, 45, 20, 15, 40, 50, 30, 35 };

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10 - i - 1; j++) {
			if (a[j] > a[j + 1]) {
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	printf("Vector ordenado: \n");
	for (int i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}

}