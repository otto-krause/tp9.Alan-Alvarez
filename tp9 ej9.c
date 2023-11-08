#include <stdio.h>

#define NUM_CHOFERES 5
#define DIAS_TRABAJO 6

struct Chofer {
	int legajo;
	float horasTrabajadas[DIAS_TRABAJO];
	float sueldoPorHora;
	char nombre[50];
};

int main() {
	struct Chofer choferes[NUM_CHOFERES];
	float totalHorasTrabajadas[NUM_CHOFERES] = {0};
	float sueldoSemanal[NUM_CHOFERES] = {0};
	float totalPagoEmpresa = 0;
	int choferLunesMasHoras = -1;
	float maxHorasLunes = 0;
	
	for (int i = 0; i < NUM_CHOFERES; i++) {
		printf("Ingrese el legajo del chofer %d: ", i + 1);
		scanf("%d", &choferes[i].legajo);
		
		printf("Ingrese el nombre del chofer %d: ", i + 1);
		scanf("%s", choferes[i].nombre);
		
		printf("Ingrese el sueldo por hora del chofer %d: $", i + 1);
		scanf("%f", &choferes[i].sueldoPorHora);
		
		printf("Ingrese las horas trabajadas por el chofer %d para cada día de la semana:\n", i + 1);
		for (int j = 0; j < DIAS_TRABAJO; j++) {
			printf("Día %d: ", j + 1);
			scanf("%f", &choferes[i].horasTrabajadas[j]);
			totalHorasTrabajadas[i] += choferes[i].horasTrabajadas[j];
			
			if (j == 0 && choferes[i].horasTrabajadas[j] > maxHorasLunes) {
				maxHorasLunes = choferes[i].horasTrabajadas[j];
				choferLunesMasHoras = i;
			}
		}
		
		sueldoSemanal[i] = totalHorasTrabajadas[i] * choferes[i].sueldoPorHora;
		totalPagoEmpresa += sueldoSemanal[i];
	}
	
	printf("\nReporte de la compañía de transporte:\n");
	for (int i = 0; i < NUM_CHOFERES; i++) {
		printf("Chofer %d - Legajo: %d - Nombre: %s\n", i + 1, choferes[i].legajo, choferes[i].nombre);
		printf("Horas trabajadas a la semana: %.2f\n", totalHorasTrabajadas[i]);
		printf("Sueldo semanal: $%.2f\n", sueldoSemanal[i]);
		printf("\n");
	}
	
	printf("Total que pagará la empresa: $%.2f\n", totalPagoEmpresa);
	
	if (choferLunesMasHoras != -1) {
		printf("El chofer que labora más horas el día lunes es: %s (Legajo: %d)\n", choferes[choferLunesMasHoras].nombre, choferes[choferLunesMasHoras].legajo);
	} else {
		printf("No se registraron choferes el día lunes.\n");
	}
	
	return 0;
}
