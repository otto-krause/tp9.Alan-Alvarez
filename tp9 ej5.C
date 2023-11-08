#include <stdio.h>

#define FILAS 15
#define COLUMNAS 12

int main() {
	int arreglo[FILAS][COLUMNAS];
	int menorElemento = 0;
	int sumaPrimerasCincoFilas = 0;
	int totalNegativosColumnas59 = 0;
	
	printf("Ingrese los elementos del arreglo (%d filas x %d columnas):\n", FILAS, COLUMNAS);
	for (int i = 0; i < FILAS; i++) {
		for (int j = 0; j < COLUMNAS; j++) {
			printf("Elemento en fila %d, columna %d: ", i + 1, j + 1);
			scanf("%d", &arreglo[i][j]);
			
			if (i == 0 && j == 0) {
				menorElemento = arreglo[i][j];
			} else if (arreglo[i][j] < menorElemento) {
				menorElemento = arreglo[i][j];
			}
			
			if (i < 5) {
				sumaPrimerasCincoFilas += arreglo[i][j];
			}
			
			if (j >= 4 && j <= 8 && arreglo[i][j] < 0) {
				totalNegativosColumnas59++;
			}
		}
	}
	
	printf("El menor elemento del arreglo es: %d\n", menorElemento);
	printf("La suma de los elementos de las cinco primeras filas es: %d\n", sumaPrimerasCincoFilas);
	printf("El total de elementos negativos en las columnas 5 a 9 es: %d\n", totalNegativosColumnas59);
	
	return 0;
}
