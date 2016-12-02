#include <stdio.h>
void printBoard(int, int, int,int, int, int,int, int, int);
int main () {
	int a = 0,b = 0,c = 0,d = 0,e = 0,f = 0,g = 0,h = 0,i = 0;
	int x, y;
	int player = 1;
	printf("          Jogo do Galo.\n\n");
	printBoard(a,b,c,d,e,f,g,h,i);
	getPlay(x, y);
	writeBoard(a,b,c,d,e,f,g,h,i);
	printBoard(a,b,c,d,e,f,g,h,i);
	
}

void printBoard(a,b,c,d,e,f,g,h,i) {
	printf("               X     X     \n");
	printf("               X     X     \n");
	printf("            %c  X  %c  X  %c  \n", a, b, c);
	printf("               X     X     \n");
	printf("               X     X     \n");
	printf("          XXXXXXXXXXXXXXXXX\n");
	printf("               X     X     \n");
	printf("               X     X     \n");
	printf("            %c  X  %c  X  %c  \n", d, e, f);
	printf("               X     X     \n");
	printf("               X     X     \n");
	printf("          XXXXXXXXXXXXXXXXX\n");
	printf("               X     X     \n");
	printf("               X     X     \n");
	printf("            %c  X  %c  X  %c  \n", g, h, i);
	printf("               X     X     \n");
	printf("               X     X     \n");
}

int getPlay(x, y) {
	do {
		printf("Escolha uma linha (1, 2 ou 3)\n");
		scanf("%d", &x);
		printf("Escolha uma coluna (1, 2 ou 3)\n");
		scanf("%d", &y);
	} while (x < 1 || x > 3 && y < 1 || y > 3);
	system("cls");
}

void writeBoard(a,b,c,d,e,f,g,h,i,x,y,player) {
	if(x == 1 && y == 1) {a = player;}
	if(x == 1 && y == 2) {b = player;}
	if(x == 1 && y == 3) {c = player;}
	if(x == 2 && y == 1) {d = player;}
	if(x == 2 && y == 2) {e = player;}
	if(x == 2 && y == 3) {f = player;}
	if(x == 3 && y == 1) {g = player;}
	if(x == 3 && y == 2) {h = player;}
	if(x == 3 && y == 3) {i = player;}

}
