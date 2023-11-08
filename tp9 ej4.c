#include <stdio.h>

int main() {
	int n;
	printf("Ingrese la cantidad de elementos del vector: ");
	scanf("%d", &n);
	
	int primerVector[n];
	int segundoVector[n];
	
	printf("Ingrese los elementos del primer vector:\n");
	for (int i = 0; i < n; i++) {
		printf("Elemento %d: ", i + 1);
		scanf("%d", &primerVector[i]);
	}
	
	for (int i = 0; i < n; i++) {
		segundoVector[(i + 1) % n] = primerVector[i];
	}
	printf("El segundo vector formado es:\n");
	for (int i = 0; i < n; i++) {
		printf("%d ", segundoVector[i]);
	}
	printf("\n");
	
	return 0;
}
