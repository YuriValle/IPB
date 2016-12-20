#include <stdio.h>

int main(){
	int numero;
	float qtdNumerosDigitados = 0;
	float qtdMultiplosDeQuatro = 0;
	do{
		printf("Digite um numero: ");
		scanf("%d", &numero);
		if(numero == 0){
			break;
		}
		if(numero%4 == 0){
			qtdMultiplosDeQuatro = qtdMultiplosDeQuatro + 1;
		}
		qtdNumerosDigitados++;
	}while(numero != 0);
	if(qtdNumerosDigitados == 0){
		printf("Nenhum numero foi digitado.\n");
	}else{
		printf("%.2f%c dos numeros inseridos sao multiplos de 4\n",qtdMultiplosDeQuatro/qtdNumerosDigitados*100,37);
	}
}
