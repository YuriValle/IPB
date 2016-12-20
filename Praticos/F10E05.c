#include <stdio.h>

int main(){
	long int numero;
	int qtdAlgarismo = 0;
	int soma = 0;
	printf("Digite um numero: ");
	scanf("%ld", &numero);
	while(numero != 0){
		soma = soma + numero%10;
		numero = numero/10;
        qtdAlgarismo++;
    }
    printf("O numero digitado e constituido por %d algarismos.\n",qtdAlgarismo);
    printf("A soma dos algarismos e de %d.\n",soma);
}
