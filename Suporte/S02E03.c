#include <stdio.h>
void escolheCor();
int main() {
	escolheCor();
	while (1 == 1) {
		printf("                           X                 X                 X                 X                                  X                 X                 X                 X\n");
		sleep(7);
		printf("                            X                 X                 X                 X                                X                 X                 X                 X\n");
		sleep(7);
		printf("                             X                 X                 X                 X                              X                 X                 X                 X\n");
		sleep(7);
		printf("                              X                 X                 X                 X                            X                 X                 X                 X\n");
		sleep(7);
		printf("                               X                 X                 X                 X                          X                 X                 X                 X\n");
		sleep(7);
		printf("                                X                 X                 X                 X                        X                 X                 X                 X\n");
		sleep(7);
		printf("                                 X                 X                 X                 X                      X                 X                 X                 X\n");
		sleep(7);
		printf("                                  X                 X                 X                 X                    X                 X                 X                 X\n");
		sleep(7);
		printf("                                   X                 X                 X                 X                  X                 X                 X                 X\n");
		sleep(7);
		printf("                                    X                 X                 X                 X                X                 X                 X                 X\n");
		sleep(7);
		printf("                                     X                 X                 X                 X              X                 X                 X                 X\n");
		sleep(7);
		printf("                                      X                 X                 X                 X            X                 X                 X                 X\n");
		sleep(7);
		printf("                                       X                 X                 X                 X          X                 X                 X                 X\n");
		sleep(7);
		printf("                                        X                 X                 X                 X        X                 X                 X                 X\n");
		sleep(7);
		printf("                                         X                 X                 X                 X      X                 X                 X                 X\n");
		sleep(7);
		printf("                                          X                 X                 X                 X    X                 X                 X                 X\n");
		sleep(7);
		printf("                                           X                 X                 X                 X  X                 X                 X                 X\n");
		sleep(7);
		printf("                                            X                 X                 X                 XX                 X                 X                 X\n");
		sleep(7);
		printf("                                           X                 X                 X                 X  X                 X                 X                 X\n");
		sleep(7);
		printf("                                          X                 X                 X                 X    X                 X                 X                 X\n");
		sleep(7);
		printf("                                         X                 X                 X                 X      X                 X                 X                 X\n");
		sleep(7);
		printf("                                        X                 X                 X                 X        X                 X                 X                 X\n");
		sleep(7);
		printf("                                       X                 X                 X                 X          X                 X                 X                 X\n");
		sleep(7);
		printf("                                      X                 X                 X                 X            X                 X                 X                 X\n");
		sleep(7);
		printf("                                     X                 X                 X                 X              X                 X                 X                 X\n");
		sleep(7);
		printf("                                    X                 X                 X                 X                X                 X                 X                 X\n");
		sleep(7);
		printf("                                   X                 X                 X                 X                  X                 X                 X                 X\n");
		sleep(7);
		printf("                                  X                 X                 X                 X                    X                 X                 X                 X\n");
		sleep(7);
		printf("                                 X                 X                 X                 X                      X                 X                 X                 X\n");
		sleep(7);
		printf("                                X                 X                 X                 X                        X                 X                 X                 X\n");
		sleep(7);
		printf("                               X                 X                 X                 X                          X                 X                 X                 X\n");
		sleep(7);
		printf("                              X                 X                 X                 X                            X                 X                 X                 X\n");
		sleep(7);
		printf("                             X                 X                 X                 X                              X                 X                 X                 X\n");
		sleep(7);
		printf("                            X                 X                 X                 X                                X                 X                 X                 X\n");
		sleep(7);
		printf("                           X                 X                 X                 X                                  X                 X                 X                 X\n");
		sleep(7);
	}
}

void escolheCor() {
	int cor;
	do {
		printf("Escolha a cor.\n");
		printf("0 - Preto.\n");
		printf("1 - Azul.\n");
		printf("2 - Verde.\n");
		printf("3 - Aqua.\n");
		printf("4 - Vermelho.\n");
		scanf("%d", &cor);
	} while (cor < 0 || cor > 4);
	if (cor == 1) {system("color 1");}
	if (cor == 2) {system("color 2");}
	if (cor == 3) {system("color 3");}
	if (cor == 4) {system("color 4");}
	if (cor == 5) {system("color 5");}
}
