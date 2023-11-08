#include <stdio.h>

#define FILAS 12
#define COLUMNAS 12

int main() {
	int matriz1[FILAS][COLUMNAS];
	int matriz2[FILAS][COLUMNAS];
	
	printf("Ingrese los elementos de la primera matriz (%d filas x %d columnas):\n", FILAS, COLUMNAS);
	for (int i = 0; i < FILAS; i++) {
		for (int j = 0; j < COLUMNAS; j++) {
			printf("Elemento en fila %d, columna %d: ", i + 1, j + 1);
			scanf("%d", &matriz1[i][j]);
		}
	}
	
	printf("Ingrese los elementos de la segunda matriz (%d filas x %d columnas):\n", FILAS, COLUMNAS);
	for (int i = 0; i < FILAS; i++) {
		for (int j = 0; j < COLUMNAS; j++) {
			printf("Elemento en fila %d, columna %d: ", i + 1, j + 1);
			scanf("%d", &matriz2[i][j]);
		}
	}
	
	int iguales = 1;
	for (int i = 0; i < FILAS; i++) {
		if (matriz1[i][i] != matriz2[i][i]) {
			iguales = 0;
			break;
		}
	}
	
	if (iguales) {
		printf("Las diagonales principales de ambas matrices son iguales.\n");
	} else {
		printf("Las diagonales principales de ambas matrices no son iguales.\n");
	}
	
	return 0;
}
