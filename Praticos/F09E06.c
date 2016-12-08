#include <stdio.h>

int main(){
	int horasTrabalhadas;
	int horasExtra;
	int salarioHora;
	int aPagar;
	printf("Calculadora de salario semanal.\n");
	printf("Digite a quantidade de horas trabalhadas: ");
	scanf("%d", &horasTrabalhadas);
	printf("Digite o salario por hora: ");
	scanf("%d", &salarioHora);
	if(horasTrabalhadas > 40) {
		horasExtra = horasTrabalhadas - 40;
		aPagar = (horasTrabalhadas*salarioHora)+((horasExtra*salarioHora)*2);
		printf("E preciso pagar %d ao trabalhador.\n", aPagar);
	} else {
		aPagar = horasTrabalhadas*salarioHora;
		printf("E preciso pagar %d ao trabalhador.\n", aPagar);
	}
}
