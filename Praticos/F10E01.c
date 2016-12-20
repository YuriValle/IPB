#include <stdio.h>

int main(){
	int num, mdiv;
	printf("Digite um numero: ");
	scanf("%d", &num);
	if(num > 1){
		mdiv = num - 1;
	}else{
		mdiv = num;
	}
	while(num%mdiv !=0){
		mdiv = mdiv - 1;
	}
	printf("O maior divisor de %d e %d", num, mdiv);
}
