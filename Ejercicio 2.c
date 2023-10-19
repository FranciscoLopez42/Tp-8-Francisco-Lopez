#include <stdio.h>
#include <stdlib.h>

int main() {
	int matriz[3][3];
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("Ingresa los valores de la matriz de 3x3:\n");
			scanf("%d ", &matriz[i][j]);
		}
		printf("\n\n");
	}
	
	printf("Columnas pares:\n");
	for (int j = 0; j < 3; j += 2) {
		for (int i = 0; i < 3; i++) {
			printf("%d\t", matriz[i][j]);
		}
		printf("\n");
	}
	
	printf("Columnas impares:\n");
	for (int j = 1; j < 3; j += 2) {
		for (int i = 0; i < 3; i++) {
			printf("%d\t", matriz[i][j]);
		}
		printf("\n");
	}
	
	system("pause");
	return 0;
}
