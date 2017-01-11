#include <stdio.h>

int main(){
	int i;
	char nomes[][20] = {"Bruce", "Lex", "Peter"};
	for(i=0;i<3;i++){
		printf("Nome na posicao %d: %s\n", i, nomes[i]);
	}
}
