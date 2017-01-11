#include <stdio.h>

int main(){
	int i;
	char nomes[][20] = {"Bruce", "Lex", "Peter"};
	printf("Soma: %d\n", sizeof(nomes));
	printf("Um: %d\n", sizeof((nomes)[0]));
	printf("Divisao: %d\n", sizeof(nomes) / sizeof((nomes)[0]));
	printf("Caractere: %c\n", nomes[1][2]);
	
}
