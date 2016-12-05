#include <stdio.h>

int main (void) {
	float ESCUDO = 200.482;
	int euro;
	printf("Saiba a conversao de Euros para Escudos | Digite o valor em EUROS |\n");
	scanf("%d",&euro);
	printf("%d Euros em escudos e: %.3f\n", euro, euro*ESCUDO);
}
