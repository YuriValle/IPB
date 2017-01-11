#include <stdio.h>
int levantarDinheiro(int,int);

int main(){
	int uId = 22;
	int id;
	int uPass = 33;
	int pass;
	int i;
	int login = 0;
	int opcao = 10;
	int saldo = 2000;
	int debito;
	int credito;
	
	printf("Insira o ID:\n");
	scanf("%d", &id);
	for(i = 0 ; i < 3; i = i + 1){
		printf("Insira a senha:\n");
		scanf("%d", &pass);
		if(pass == uPass){
			login = 1;
			break;
		}
	}
	if(login == 0){
		return 0;
	}
	
	while(opcao!= 4) {	
		printf("Digite uma opcao:\n");
		printf("1-Visualizar saldo\n");
		printf("2-Levantar dinheiro\n");
		printf("3-Depositar dinheiro\n");
		printf("4-Sair\n");
		scanf("%d", &opcao);
		switch(opcao){
			case 1: printf("O seu saldo e de %d Euro(s)\n", saldo);
					break;
			case 2: printf("Quantidade a levantar \n");
					scanf("%d", &debito);
					saldo = levantarDinheiro(saldo, debito);
					break;
			case 3: printf("Quantidade a depositar \n");
					scanf("%d", &credito);
					saldo = saldo + credito;
					break;
		}
}
}
int levantarDinheiro(int saldo, int debito){
	if(saldo - debito < 0){
		return saldo;	
	}
	if(debito < 0){
		return saldo;
	}
	return saldo - debito;
}

