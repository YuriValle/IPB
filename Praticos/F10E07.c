#include <stdio.h>

int main(){
	int numero, quadrado, cubo, i;
	do{
		printf("Digite um numero entre 1 e 24: ");
		scanf("%d", &numero);
	}while(numero < 1 || numero > 24);
	for(i = 1; i <= numero; i++){
		quadrado = i * i;
		cubo = i * i * i;
		printf("%d ao quadrado = %d\n", i, quadrado);
		printf("%d ao cubo = %d\n\n", i, cubo);
	}
	
}
