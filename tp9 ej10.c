#include <stdio.h>

#define FILAS 10
#define COLUMNAS 10

int main() {
	int matriz[FILAS][COLUMNAS];
	int sumaFilas[FILAS] = {0};
	int sumaColumnas[COLUMNAS] = {0};
	
	printf("Ingrese los elementos de la matriz (%d filas x %d columnas):\n", FILAS, COLUMNAS);
	for (int i = 0; i < FILAS; i++) {
		for (int j = 0; j < COLUMNAS; j++) {
			printf("Elemento en fila %d, columna %d: ", i + 1, j + 1);
			scanf("%d", &matriz[i][j]);
			
			sumaFilas[i] += matriz[i][j];
			sumaColumnas[j] += matriz[i][j];
		}
	}
	
	printf("Matriz ingresada:\n");
	for (int i = 0; i < FILAS; i++) {
		for (int j = 0; j < COLUMNAS; j++) {
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	
	printf("Suma de las filas:\n");
	for (int i = 0; i < FILAS; i++) {
		printf("Fila %d: %d\n", i + 1, sumaFilas[i]);
	}
	
	printf("Suma de las columnas:\n");
	for (int j = 0; j < COLUMNAS; j++) {
		printf("Columna %d: %d\n", j + 1, sumaColumnas[j]);
	}
	
	return 0;
}
