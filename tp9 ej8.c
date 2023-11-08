#include <stdio.h>

#define FILAS 5
#define COLUMNAS 6

int main() {
	int matriz[FILAS][COLUMNAS];
	int negativos = 0;
	int cerosDiagonalPrincipal = 0;
	
	printf("Ingrese los elementos de la matriz (%d filas x %d columnas):\n", FILAS, COLUMNAS);
	for (int i = 0; i < FILAS; i++) {
		for (int j = 0; j < COLUMNAS; j++) {
			printf("Elemento en fila %d, columna %d: ", i + 1, j + 1);
			scanf("%d", &matriz[i][j]);
			
			if (matriz[i][j] < 0) {
				negativos++;
			}
			
			if (i == j && matriz[i][j] == 0) {
				cerosDiagonalPrincipal++;
			}
		}
	}
	
	printf("La matriz contiene %d elementos negativos.\n", negativos);
	printf("La diagonal principal contiene %d elementos igual a cero.\n", cerosDiagonalPrincipal);
	
	return 0;
}
