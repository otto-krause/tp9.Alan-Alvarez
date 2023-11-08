#include <stdio.h>

#define NUM_TORRES 7
#define NUM_PISOS 20
#define NUM_DEPARTAMENTOS 6

int main() {
	int habitantesComplejo = 0;
	int habitantesPorTorre[NUM_TORRES] = {0};
	int totalHabitantesPorTorre = 0;
	
	for (int torre = 0; torre < NUM_TORRES; torre++) {
		for (int piso = 0; piso < NUM_PISOS; piso++) {
			for (int departamento = 0; departamento < NUM_DEPARTAMENTOS; departamento++) {
				printf("Ingrese la cantidad de habitantes en la Torre %d, Piso %d, Departamento %d: ", torre + 1, piso + 1, departamento + 1);
				int habitantes;
				scanf("%d", &habitantes);
				habitantesComplejo += habitantes;
				habitantesPorTorre[torre] += habitantes;
			}
		}
	}
	
	for (int torre = 0; torre < NUM_TORRES; torre++) {
		totalHabitantesPorTorre += habitantesPorTorre[torre];
	}
	float promedioHabitantesPorTorre = (float)totalHabitantesPorTorre / NUM_TORRES;
	
	float promedioHabitantesPorPiso = (float)habitantesComplejo / (NUM_TORRES * NUM_PISOS * NUM_DEPARTAMENTOS);
	
	printf("Cantidad total de habitantes del complejo: %d\n", habitantesComplejo);
	printf("Cantidad total de habitantes por torre:\n");
	for (int torre = 0; torre < NUM_TORRES; torre++) {
		printf("Torre %d: %d habitantes\n", torre + 1, habitantesPorTorre[torre]);
	}
	printf("Cantidad promedio de habitantes por torre: %.2f\n", promedioHabitantesPorTorre);
	printf("Cantidad promedio de habitantes por piso: %.2f\n", promedioHabitantesPorPiso);
	
	return 0;
}
