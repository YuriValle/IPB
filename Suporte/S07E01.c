#include <stdio.h>
void mostraMenu();
float levantarDinheiro(float,float);
float depositarDinheiro(float,float);
void operacaoCancelada();
void operacaoSucedida(float);
void exibeSaldo(float);

int main(){
	char nomes[][10] = {"Yuri","Miguel","Chris", "Isabel", "Tatiana", "Joao"};
	char senhas[][20] = {"Valle","Azores","Suica","Algarve", "Flor", "Batata"};
	float saldos[] = {100.0,120.0,220.0,255.0,79.52,-35.27};
	char nome[10];
	char senha[20];
	float saldo;
	int i,j;
	int login = 0;
	int opcao;
	float debito;
	float credito;
	int quantidadeNomes = sizeof(nomes) / sizeof((nomes)[0]);
	printf("Insira o Nome:\n");
	scanf("%s", &nome);
	for(i = 0 ; i < 3; i++){
		printf("Insira a senha:\n");
		scanf("%s", &senha);
		for(j = 0 ; j < quantidadeNomes; j++){
			if(!strcmp(nome,nomes[j])){
				if(!strcmp(senha,senhas[j])){
					saldo = saldos[j];
					login = 1;
					break;
				}
			}
		}
		if(login == 1){
			break;
		}
	}
	if(login == 0){
		return 0;
	}
	do{
		mostraMenu();
		scanf("%d", &opcao);
		switch(opcao){
			case 1: exibeSaldo(saldo);
					break;
			case 2: printf("Quantidade a levantar \n");
					scanf("%f", &debito);
					saldo = levantarDinheiro(saldo, debito);
					break;
			case 3: printf("Quantidade a depositar \n");
					scanf("%f", &credito);
					saldo = depositarDinheiro(saldo, credito);
					break;
		}
	}while(opcao!= 4);
}
void mostraMenu(){
	printf("Digite uma opcao:\n");
	printf("1-Visualizar saldo\n");
	printf("2-Levantar dinheiro\n");
	printf("3-Depositar dinheiro\n");
	printf("4-Sair\n");
}
float levantarDinheiro(float saldo, float debito){
	if(saldo - debito < 0.0){
		printf("Saldo insuficiente.\n");
		operacaoCancelada();
		return saldo;	
	}
	if(debito < 0){
		printf("Debito negativo.\n");
		operacaoCancelada();
		return saldo;
	}
	operacaoSucedida(saldo - debito);
	return saldo - debito;
}
float depositarDinheiro(float saldo, float credito){
	if(credito < 0){
		printf("Credito negativo.\n");
		operacaoCancelada();
		return saldo;
	}
	if(credito > 1000){
		printf("Credito superior a 1000 Euros.\n");
		operacaoCancelada();
		return saldo;
	}
	operacaoSucedida(saldo + credito);
	return saldo + credito;
}
void operacaoCancelada(){
	printf("Operacao Cancelada.\n");
}
void operacaoSucedida(float saldo){
	printf("Operacao realizada com sucesso.\n");
	exibeSaldo(saldo);
}
void exibeSaldo(float saldo){
	printf("O seu saldo e de %.2f Euro(s)\n\n", saldo);
}
