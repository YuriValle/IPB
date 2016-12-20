#include <stdio.h>

int main(){
	int numero, quadrado, cubo;
	
	do{
		printf("Digite um numero entre 10 e 15 inclusive: ");
		scanf("%d", &numero);
	}while(numero<10 || numero>15);
	quadrado = numero*numero;
	cubo = numero*numero*numero;
	printf("%d elevado ao quadrado = %d\n",numero, quadrado);
	printf("%d elevado ao cubo = %d\n",numero, cubo);
}
