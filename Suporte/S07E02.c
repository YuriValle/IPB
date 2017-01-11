#include <stdio.h>

int main(){
	int i;
	char nomes[][20] = {"Bruce","Lex","Peter"};
	char senhas[][10] = {"Wayne","Luthor","Parker"};
	float saldos[] = {999.99,-509.92,250.12};
	int arraySize = sizeof(nomes) / sizeof((nomes)[0]);
	for(i=0;i<arraySize;i++){
		printf("Conta: %s\n", nomes[i]);
		printf("Senha: %s\n", senhas[i]);
		printf("Saldo: %.2f\n\n", saldos[i]);
	}
}
