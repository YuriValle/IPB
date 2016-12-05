#include <stdio.h>

int main (void) {
	int comprimento;
	int largura;
	int area;
	int perimetro;
	printf("Digite o comprimento do retangulo: ");
	scanf("%d", &comprimento);
	printf("Digite o largura do retangulo: ");
	scanf("%d", &largura);
	area = comprimento * largura;
	perimetro = comprimento * 2 + largura * 2;
	printf("Area: %d\n", area);
	printf("Perimetro: %d\n", perimetro);
}
