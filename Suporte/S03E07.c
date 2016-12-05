#include <stdio.h>

int main(){
	int numero;
	printf("Tabuada\n");
	printf("Digite um numero inteiro e saiba a tabuada ate 5.\n");
	scanf("%d", &numero);
	printf("1 x %d = %d\n", numero, numero*1);
	printf("2 x %d = %d\n", numero, numero*2);
	printf("3 x %d = %d\n", numero, numero*3);
	printf("4 x %d = %d\n", numero, numero*4);
	printf("5 x %d = %d\n", numero, numero*5);
}
