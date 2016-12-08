#include <stdio.h>

int main(){
	int ano;
	printf("Ano bissexto.\n");
	printf("Digite o ano\n");
	scanf("%d", &ano);
	if (ano%4 == 0 && ano%100 == 1 || ano%400 == 0){
		printf("o ano %d e bissexto.\n", ano);
	} else {
		printf("o ano %d nao e bissexto.\n", ano);
	}
}
