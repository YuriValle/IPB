#include <stdio.h>

void mostraMenu();
void perguntaNumeros();
int soma();
int subtracao();
int multiplicacao();
float divisao();
int primeiroNumero = 0;
int segundoNumero = 0;
int opcao = 0;
float resultado = 0;

int main (void) {
	do {
		mostraMenu();
		switch(opcao){
			case 1: perguntaNumeros();
					resultado = soma();
					printf("O resultado e: %d\n", resultado);
					mostraMenu();
			case 2: perguntaNumeros();
					resultado = subtracao();
					printf("O resultado e: %d\n", resultado);
					mostraMenu();
			case 3: perguntaNumeros();
					resultado = multiplicacao();
					printf("O resultado e: %d\n", resultado);
					mostraMenu();
			case 4: perguntaNumeros();
					resultado = divisao();
					printf("O resultado e: %d\n", resultado);
					mostraMenu();
			case 99: exit(0);
		} 
	}while (opcao !=99);
	return 0;
}

void mostraMenu() {
	printf("1 - Soma\n");
	printf("2 - Subtracao\n");
	printf("3 - Multiplicacao\n");
	printf("4 - Divisao\n");
	printf("99 - Sair\n");
	scanf("%d", &opcao);
}
int soma() {
	return primeiroNumero+segundoNumero;
}
int subtracao(){
	return primeiroNumero-segundoNumero;
}
int multiplicacao(){
	return primeiroNumero*segundoNumero;
}
float divisao(){
	if(segundoNumero == 0) {
		return 0;
	}else{
		return primeiroNumero/segundoNumero;
	}
}
void perguntaNumeros(){
	printf("Digite o primeiro valor.\n");
	scanf("%d", &primeiroNumero);
	printf("Digite o segundo valor.\n");
	scanf("%d", &segundoNumero);
}
