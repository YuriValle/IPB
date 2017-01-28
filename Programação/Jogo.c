#include <stdio.h>

struct character {
	char name[100];
	int atk;
	int def;
	int agi;
	int exp;
	double money;
};

int randomValue(int, int);
struct character createPlayer();
struct character createGoblin(int,int);
struct character createOrc(int,int);
struct character battle(struct character, struct character);
struct character levelUpPlayer(struct character);
struct character levelUpEnemy(struct character, int, int);
void showAttributes(struct character);
void showStore();

int main(){
	int option, outcome;
	struct character player, goblin, orc;
	player = createPlayer();
	goblin = createGoblin(1,3);
	orc = createOrc(5,12);
	do{
		printf("0 - Sair\n");
		printf("1 - Goblin\n");
		printf("2 - Orc\n");
		printf("3 - Loja\n");
		scanf("%d", &option);
		if(option == 1){
			player = battle(player, goblin);	
		}
		if(option == 2){
			player = battle(player, orc);	
		}
		if(option == 3){
			showStore();	
		}
		if(player.exp > 100){
			printf("Ganhaste nivel!\n");
			player = levelUpPlayer(player);
			goblin = levelUpEnemy(goblin, player.atk-1, player.atk+1);
			orc = levelUpEnemy(orc, player.atk-3, player.atk+12);
		}
	}while(option != 0);
};
struct character createPlayer(){
	int pontos = 4;
	int pts;
	int opcao;
	struct character player;
	player.atk = 0;
	player.def = 0;
	player.agi = 0;
	player.exp = 0;
	player.money = 0.0;
	printf("Digite seu nome: ");
	scanf("%s", &player.name);
	do{
		printf("Tens %d pontos para distribuir.\n", pontos);
		printf("1 - Atk\n");
		printf("2 - Def\n");
		printf("3 - Agi\n");
		scanf("%d", &opcao);
		if(opcao == 1){
			printf("Tens %d de Atk e %d pontos, quantos queres usar?\n", player.atk, pontos);
			scanf("%d", &pts);
			if(pts <= pontos){
				player.atk = player.atk + pts;
				pontos = pontos - pts;
			}
		}
		if(opcao == 2){
			printf("Tens %d de Def e %d pontos, quantos queres usar?\n", player.def, pontos);
			scanf("%d", &pts);
			if(pts <= pontos){
				player.def = player.def + pts;
				pontos = pontos - pts;
			}
		}
		if(opcao == 3){
			printf("Tens %d de Agi e %d pontos, quantos queres usar?\n", player.agi, pontos);
			scanf("%d", &pts);
			if(pts <= pontos){
				player.agi = player.agi + pts;
				pontos = pontos - pts;
			}
		}
	}while(pontos>0);
	printf("Seu personagem:\n");
	printf("Nome: %s\n", player.name);
	printf("Atk: %d\n", player.atk);
	printf("Def: %d\n", player.def);
	printf("Agi: %d\n", player.agi);
	printf("EXP: %d\n", player.exp);
	printf("Dinheiro: %.2f\n", player.money);
	return player;
};
struct character createGoblin(int min, int max){
	struct character enemy;
	printf("Digite o nome do Goblin: ");
	scanf("%s", &enemy.name);
	enemy.atk = randomValue(min,max);
	enemy.def = randomValue(min,max);
	enemy.agi = randomValue(min,max);
	enemy.exp = randomValue(10,25);
	enemy.money = (double) randomValue(1,5);
	return enemy;
};
struct character createOrc(int min, int max){
	struct character enemy;
	printf("Digite o nome do Orc: ");
	scanf("%s", &enemy.name);
	enemy.atk = randomValue(min,max);
	enemy.def = randomValue(min,max);
	enemy.agi = randomValue(min,max);
	enemy.exp = randomValue(40,65);
	enemy.money = (double)randomValue(5,15);
	return enemy;
};
struct character battle(struct character player, struct character enemy){
	system("cls");
	showAttributes(player);
	printf("\n");
	showAttributes(enemy);
	if(player.agi >= enemy.agi){
		printf("Atacas primeiro!\n");
		if(player.atk >= enemy.def){
			printf("Tens maior ataque e ganhas!\n");
			player.exp = player.exp + enemy.exp;
			player.money = player.money + enemy.money;
			return player;
		}
	}else{
		printf("Nao atacas primeiro!\n");
		if(enemy.atk > player.def){
			printf("Tens menor defesa e perdes!\n");
			return player;
		}
	}
	return player;
};
void showAttributes(struct character character){
	printf("Personagem:\n");
	printf("Nome: %s\n", character.name);
	printf("Atk: %d\n", character.atk);
	printf("Def: %d\n", character.def);
	printf("Agi: %d\n", character.agi);
	printf("EXP: %d\n", character.exp);
	printf("Dinheiro: %.2f\n", character.money);
};
struct character levelUpPlayer(struct character player){
	int pontos = 2;
	int pts;
	int opcao;
	player.exp = 0;
	do{
		printf("Tens %d pontos para distribuir.\n", pontos);
		printf("1 - Atk\n");
		printf("2 - Def\n");
		printf("3 - Agi\n");
		scanf("%d", &opcao);
		if(opcao == 1){
			printf("Tens %d de Atk e %d pontos, quantos queres usar?\n", player.atk, pontos);
			scanf("%d", &pts);
			if(pts <= pontos){
				player.atk = player.atk + pts;
				pontos = pontos - pts;
			}
		}
		if(opcao == 2){
			printf("Tens %d de Def e %d pontos, quantos queres usar?\n", player.def, pontos);
			scanf("%d", &pts);
			if(pts <= pontos){
				player.def = player.def + pts;
				pontos = pontos - pts;
			}
		}
		if(opcao == 3){
			printf("Tens %d de Agi e %d pontos, quantos queres usar?\n", player.agi, pontos);
			scanf("%d", &pts);
			if(pts <= pontos){
				player.agi = player.agi + pts;
				pontos = pontos - pts;
			}
		}
	}while(pontos>0);
	return player;
};
struct character levelUpEnemy(struct character enemy, int min, int max){
	enemy.atk = randomValue(min,max);
	enemy.def = randomValue(min,max);
	enemy.agi = randomValue(min,max);
	enemy.exp = randomValue(min*3,max*3);
	enemy.money = (double) randomValue(min*2,max*2);
	return enemy;
};
void showStore(){
	printf("Loja em construcao.\n");
};
int randomValue(int min, int max){
    int result = 0;
	int low = 0;
	int high = 0;
    if(min<max){
        low = min;
        high = max++;
    }else{
        low = max++;
        high = min;
    }
    srand(time(NULL));
    return (rand()%(high-low))+low;
};
