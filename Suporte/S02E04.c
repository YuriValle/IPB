#include <stdio.h>

void printBoard(int,int,int,int,int,int,int,int,int);
int getX();
int getY();
int changePlayer(int);

int main () {
	int a = 0,b = 0,c = 0,d = 0,e = 0,f = 0,g = 0,h = 0,i = 0;
	int x, y;
	int turns;
	int player = 1;
	printf("Jogo do Galo.");
	for (turns = 0; turns < 9; turns = turns + 1) {
		printBoard(a,b,c,d,e,f,g,h,i);
		x = getX();
		y = getY();
		system("cls");
		if(x == 1 && y == 1 && a == 0) {a = player;}
		if(x == 1 && y == 2 && b == 0) {b = player;}
		if(x == 1 && y == 3 && c == 0) {c = player;}
		if(x == 2 && y == 1 && d == 0) {d = player;}
		if(x == 2 && y == 2 && e == 0) {e = player;}
		if(x == 2 && y == 3 && f == 0) {f = player;}
		if(x == 3 && y == 1 && g == 0) {g = player;}
		if(x == 3 && y == 2 && h == 0) {h = player;}
		if(x == 3 && y == 3 && i == 0) {i = player;}
		player = changePlayer(player);
	}
}

void printBoard(a,b,c,d,e,f,g,h,i) {
	printf("\n\n\n");
	printf("               X     X     \n");
	printf("            %d  X  %d  X  %d  \n", a, b, c);
	printf("               X     X     \n");
	printf("               X     X     \n");
	printf("          XXXXXXXXXXXXXXXXX\n");
	printf("               X     X     \n");
	printf("               X     X     \n");
	printf("            %d  X  %d  X  %d  \n", d, e, f);
	printf("               X     X     \n");
	printf("               X     X     \n");
	printf("          XXXXXXXXXXXXXXXXX\n");
	printf("               X     X     \n");
	printf("               X     X     \n");
	printf("            %d  X  %d  X  %d  \n", g, h, i);
	printf("               X     X     \n");
	printf("               X     X     \n");
	printf("\n\n\n");
}

int getX() {
	int x;
	do {
		printf("Escolha uma linha (1, 2 ou 3)\n");
		scanf("%d", &x);
		return x;
	} while (x < 1 || x > 3);
}
int getY() {
	int y;
	do {
		printf("Escolha uma coluna (1, 2 ou 3)\n");
		scanf("%d", &y);
		return y;
	} while (y < 1 || y > 3);
}

int changePlayer(int player) {
	if (player == 1) {
		return 2;
	} else {
		return 1;
	}
}
