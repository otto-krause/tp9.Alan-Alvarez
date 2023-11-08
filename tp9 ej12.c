#include <stdio.h>

#define NUM_SEMANAS 4
#define NUM_DIAS 7

int main() {
	int ventas[NUM_SEMANAS][NUM_DIAS];
	int totalVentasPorSemana[NUM_SEMANAS] = {0};
	float promedioVentasPorSemana[NUM_SEMANAS] = {0};
	int semanaMayorVenta = 0;
	int maxVenta = 0;
	
	for (int semana = 0; semana < NUM_SEMANAS; semana++) {
		printf("Semana %d:\n", semana + 1);
		for (int dia = 0; dia < NUM_DIAS; dia++) {
			printf("Ingrese las ventas del día %d: $", dia + 1);
			scanf("%d", &ventas[semana][dia]);
			totalVentasPorSemana[semana] += ventas[semana][dia];
		}
		promedioVentasPorSemana[semana] = (float)totalVentasPorSemana[semana] / NUM_DIAS;
		
		if (totalVentasPorSemana[semana] > maxVenta) {
			maxVenta = totalVentasPorSemana[semana];
			semanaMayorVenta = semana;
		}
	}
	
	printf("Total de ventas por semana:\n");
	for (int semana = 0; semana < NUM_SEMANAS; semana++) {
		printf("Semana %d: $%d\n", semana + 1, totalVentasPorSemana[semana]);
	}
	
	printf("Promedio de ventas por semana:\n");
	for (int semana = 0; semana < NUM_SEMANAS; semana++) {
		printf("Semana %d: $%.2f\n", semana + 1, promedioVentasPorSemana[semana]);
	}
	
	printf("La semana de mayor venta fue la semana %d con un total de $%d\n", semanaMayorVenta + 1, maxVenta);
	
	return 0;
}
