#include <stdio.h>

#define FILAS 12
#define COLUMNAS 19

int main() {
	int matriz[FILAS][COLUMNAS];
	
	printf("Ingrese los elementos de la matriz (%d filas x %d columnas):\n", FILAS, COLUMNAS);
	for (int i = 0; i < FILAS; i++) {
		for (int j = 0; j < COLUMNAS; j++) {
			printf("Elemento en fila %d, columna %d: ", i + 1, j + 1);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	for (int i = 0; i < FILAS; i++) {
		for (int j = 0; j < COLUMNAS; j++) {
			if (matriz[i][j] < 0) {
				matriz[i][j] = 0;
			}
		}
	}
	
	printf("Matriz con elementos negativos cambiados a cero:\n");
	for (int i = 0; i < FILAS; i++) {
		for (int j = 0; j < COLUMNAS; j++) {
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
