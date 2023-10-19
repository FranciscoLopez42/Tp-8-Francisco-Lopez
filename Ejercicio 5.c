#include <stdio.h>
#include <stdlib.h>

int main() {
	int sorteos[3][6];
	int frecuencia[43] = {0};
	int n;
	
	for (int s = 0; s < 3; s++) {
		printf("Ingresar 6 números para el sorteo %d (de 0 a 42 inclusive):\n", s + 1);
		for (int i = 0; i < 6; i++) {
			int numero;
			do {
				scanf("%d", &numero);
			} while (numero < 0 || numero > 42 || frecuencia[numero] > 0);
			sorteos[s][i] = numero;
			frecuencia[numero]++;
		}
	}
	
	for (int s = 0; s < 3; s++) {
		for (int i = 0; i < 5; i++) {
			for (int j = i + 1; j < 6; j++) {
				if (sorteos[s][i] > sorteos[s][j]) {
					int temp = sorteos[s][i];
					sorteos[s][i] = sorteos[s][j];
					sorteos[s][j] = temp;
				}
			}
		}
	}
	
	printf("Sorteos ordenados:\n");
	for (int s = 0; s < 3; s++) {
		printf("Sorteo %d: ", s + 1);
		for (int i = 0; i < 6; i++) {
			printf("%d ", sorteos[s][i]);
		}
		printf("\n");
	}
	
	printf("Ingresar un número N para buscar su frecuencia: ");
	scanf("%d", &n);
	int maxFrecuencia = 0;
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 6; j++) {
			if (sorteos[i][j] == n) {
				frecuencia[n]++;
				if (frecuencia[n] > maxFrecuencia) {
					maxFrecuencia = frecuencia[n];
				}
			}
		}
	}
	
	printf("Número(s) que más veces salió(eron):\n");
	for (int i = 0; i < 43; i++) {
		if (frecuencia[i] == maxFrecuencia) {
			printf("%d\n", i);
		}
	}
	
	system("pause");
	return 0;
}
