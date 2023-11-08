#include <stdio.h>

#define NUM_EMPLEADOS 5
#define DIAS_SEMANA 5

int main() {
	double ventas[NUM_EMPLEADOS][DIAS_SEMANA];
	
	for (int i = 0; i < NUM_EMPLEADOS; i++) {
		printf("Empleado %d:\n", i + 1);
		for (int j = 0; j < DIAS_SEMANA; j++) {
			printf("Venta del día %d: $", j + 1);
			scanf("%lf", &ventas[i][j]);
		}
	}
	
	double ventaMayor = ventas[0][0];
	
	for (int i = 0; i < NUM_EMPLEADOS; i++) {
		for (int j = 0; j < DIAS_SEMANA; j++) {
			if (ventas[i][j] > ventaMayor) {
				ventaMayor = ventas[i][j];
			}
		}
	}
	
	printf("\nLa venta mayor realizada fue de: $%.2lf\n", ventaMayor);
	
	return 0;
}
