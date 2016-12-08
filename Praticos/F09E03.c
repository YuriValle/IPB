#include <stdio.h>

int main(){
	int numero;
	printf("Positivo, negativo ou 0.\n");
	printf("Digite um numero.\n");
	scanf("%d", &numero);
	if (numero==0) {
		printf("%d e igual a 0.\n", numero);
	} else{
		if(numero>0){
			printf("%d e positivo.\n", numero);
		} else {
			printf("%d e negativo.\n", numero);
		}
	}
	
}
