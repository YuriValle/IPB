#include <stdio.h>

int main() {
	int resposta;
	printf("Jogo das perguntas:\n\n\n");
	printf("Primeira pergunta: \n");
	printf("Quando usamos o scanf temos de usar o & ?\n");
	printf("1 - Sim\n2 - Nao\n");
	scanf("%d", &resposta);
	if (resposta == 2) {
		printf("Oh noes :(\nTente novamente. :p\n");
		return 0;
	}
	printf("Segunda pergunta: \n");
	printf("Quando usamos o printf temos de usar o & ?\n");
	printf("1 - Sim\n2 - Nao\n");
	scanf("%d", &resposta);
	if (resposta == 1) {
		printf("Oh noes :(\nTente novamente. :p\n");
		return 0;
	}
	printf("Qual das formas de escrever esta certa?\n");
	printf("1 - printf(\"&d\", %cnomeDaVariavel);\n", 37);
	printf("2 - printf(\"%cd\", nomeDaVariavel);\n", 37);
	scanf("%d", &resposta);
	if (resposta == 1) {
		printf("Oh noes :(\nTente novamente. :p\n");
		return 0;
	}
	printf("Qual das formas de ler esta certa?\n");
	printf("1 - scanf(\"&d\", %cnomeDaVariavel);\n", 37);
	printf("2 - scanf(\"%cd\", &nomeDaVariavel);\n", 37);
	scanf("%d", &resposta);
	if (resposta == 1) {
		printf("Oh noes :(\nTente novamente. :p\n");
		return 0;
	}
	printf("Parabens, voce venceu!\n");
}
