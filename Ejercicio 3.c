#include <stdio.h>
#include <stdlib.h>

int main() {
	int matriz[5][5];
	
	printf("Ingresa los valores de la matriz de 5x5:\n");
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			scanf("%d", &matriz[i][j]);
		}
	}
	
	printf("Diagonal principal:\n");
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (i == j) {
				printf("%d\t", matriz[i][j]);
			} else {
				printf("\t");
			}
		}
		printf("\n");
	}
	
	printf("Triángulo superior:\n");
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (i <= j) {
				printf("%d\t", matriz[i][j]);
			} else {
				printf("\t");
			}
		}
		printf("\n");
	}
	
	printf("Triángulo inferior:\n");
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (i >= j) {
				printf("%d\t", matriz[i][j]);
			} else {
				printf("\t");
			}
		}
		printf("\n");
	}
	
	system("pause");
	return 0;
}
