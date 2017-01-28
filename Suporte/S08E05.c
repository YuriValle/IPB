#include <stdio.h>

int main(){
	int i;
	char nomes[][20] = {"Bruce", "Lex", "Peter"};
	char nome[20];
	printf("Digite o nome: ");
	scanf("%s", &nome);
	if(!strcmp(nome,nomes[0])){
		printf("Nome digitado OK - Bruce - \n");
	}
}
