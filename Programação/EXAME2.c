#include <stdio.h>
float diferenca(float vetor[], int tamanho){
	int i;
	float maior, menor;
	maior = vetor[0];
	menor = vetor[0];
	for(i=1;i<tamanho;i++){
		if(vetor[i] > maior){
			maior = vetor[i];
		}
		if(vetor[i] < menor){
			menor = vetor[i];
		}
	}
	return maior - menor;
}
int main(){
	int i;
	float vetor[5];
	for(i=0;i<5;i++){
		printf("SFF digite um numero real. :D");
		scanf("%f", &vetor[i]);
	}
	printf("%.2f\n",diferenca(vetor,5));
}
