#include <stdio.h>

int main (void) {
	int nota;
	do{
		printf("Porfavor, introduza uma nota de 1 a 5\n");
		scanf("%d", &nota);
	}while(nota < 1 || nota > 5);
	switch(nota){
		case 1: printf("Fraco\n");
				break;
		case 2: printf("Insuficiente\n");
				break;
		case 3: printf("Suficiente\n");
				break;
		case 4: printf("Bom\n");
				break;
		case 5: printf("Muito Bom\n");
	} 
	return 0;
}
