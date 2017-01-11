#include <stdio.h>
float levantarDinheiro(float,float);

int main(){
	int nomes[] = {36,11,14,55,23,41,22,16,69};
	int senhas[] = {000,1234,77,55,666,300,95,16,96};
	float saldos[] = {999.1,15.0,118.32,5.55,52.99,2.01,40.5,-11.1,-0.1};
	int nome;
	int senha;
	float saldo;
	int i;
	int j;
	int login = 0;
	int opcao = 10;
	float debito;
	float credito;
	
	printf("Insira o Nome:\n");
	scanf("%d", &nome);
	for(i = 0 ; i < 3; i++){
		printf("Insira a senha:\n");
		scanf("%d", &senha);
		for(j = 0 ; j < 10; j++){
			if(nome == nomes[j] && senha == senhas[j]){
				saldo = saldos[j];
				login = 1;
				break;
			}
		}
		if(login == 1){
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
			case 1: printf("O seu saldo e de %.2f Euro(s)\n", saldo);
					break;
			case 2: printf("Quantidade a levantar \n");
					scanf("%f", &debito);
					saldo = levantarDinheiro(saldo, debito);
					break;
			case 3: printf("Quantidade a depositar \n");
					scanf("%f", &credito);
					saldo = saldo + credito;
					break;
		}
	}
}
float levantarDinheiro(float saldo, float debito){
	if(saldo - debito < 0){
		return saldo;	
	}
	if(debito < 0){
		return saldo;
	}
	return saldo - debito;
}

