#include <stdio.h>

#define NUM_CHOFERES 20
#define DIAS_SEMANA 7

int main() {
	int kilometros[NUM_CHOFERES][DIAS_SEMANA];
	int totalKilometros[NUM_CHOFERES] = {0};
	int totalKilometrosSemana[DIAS_SEMANA] = {0};
	
	for (int i = 0; i < NUM_CHOFERES; i++) {
		printf("Chofer %d (legajo %d):\n", i + 1, i + 1);
		for (int j = 0; j < DIAS_SEMANA; j++) {
			printf("Día %d: ", j + 1);
			scanf("%d", &kilometros[i][j]);
			totalKilometros[i] += kilometros[i][j];
			totalKilometrosSemana[j] += kilometros[i][j];
		}
	}
	
	printf("\nInforme de kilómetros recorridos:\n");
	for (int i = 0; i < NUM_CHOFERES; i++) {
		printf("Chofer %d (legajo %d):\n", i + 1, i + 1);
		for (int j = 0; j < DIAS_SEMANA; j++) {
			printf("Día %d: %d kilómetros\n", j + 1, kilometros[i][j]);
		}
		printf("Total semanal: %d kilómetros\n\n", totalKilometros[i]);
	}
	
	printf("Informe de kilómetros por día:\n");
	for (int j = 0; j < DIAS_SEMANA; j++) {
		printf("Día %d: %d kilómetros\n", j + 1, totalKilometrosSemana[j]);
	}
	
	return 0;
}
