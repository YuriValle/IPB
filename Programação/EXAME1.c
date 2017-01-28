#include <stdio.h>

float difAltoBaixo(float alturas[], int qtd){
	float diferenca;
	int i;
	float maisAlto = alturas[0];
	float maisBaixo = alturas[0];
	for(i=1;i<qtd;i++){
		if(alturas[i] > maisAlto){
			maisAlto = alturas[i];
		}
		if(alturas[i] < maisBaixo){
			maisBaixo = alturas[i];
		}
	}
	diferenca = maisAlto - maisBaixo;
	return diferenca;
}
int main(){
	float x[] = {1.92, 1.72, 1.52};
	int y = 3;
	printf("%.2f\n", difAltoBaixo(x,y));
}
