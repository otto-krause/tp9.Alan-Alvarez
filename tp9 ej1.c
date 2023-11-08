#include <stdio.h>
#include <stdlib.h>

#define FILAS 4
#define COLUMNAS 4
#define SEMILLA 42 

int main() {
	int matriz[FILAS][COLUMNAS];
	int cantidadCeros = 0;
	
	srand(SEMILLA);
	
	for (int i = 0; i < FILAS; i++) {
		for (int j = 0; j < COLUMNAS; j++) {
			matriz[i][j] = rand() % 10;
		}
	}
	
	printf("Matriz generada:\n");
	for (int i = 0; i < FILAS; i++) {
		for (int j = 0; j < COLUMNAS; j++) {
			printf("%d ", matriz[i][j]);
			if (matriz[i][j] == 0) {
				cantidadCeros++;
			}
		}
		printf("\n");
	}
	
	printf("Cantidad de ceros en la matriz: %d\n", cantidadCeros);
	
	return 0;
}


