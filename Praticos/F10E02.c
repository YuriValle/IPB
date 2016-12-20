#include <stdio.h>

int main(){
	int numero, unidades, centenas;
	do{
		printf("Digite um numero de tres algarismos: ");
		scanf("%d", &numero);
	}while(numero < 100 || numero > 999);
	unidades = numero%10;
	centenas = numero/100;
	if(centenas == unidades){
		printf("O numero digitado E uma capicua.\n");
	}else{
		printf("O numero digitado NAO e uma capicua.\n");
	}
}
