#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float peso, result, total_pagar;
	
	printf("Digite quantos quilos voce pescou hoje:");
	scanf("%f", &peso);
	result = peso - 50;
	
	if (result > 0){
		total_pagar = result * 4;
		printf("Voce ultrapassou o limite de 50 quilos, em %5.2f quilos.\n\n",result);
		printf("Como penalidade voce tera que pagar R$ 4,00 por quilos excedido.\n\n");
		printf("Isso contabiliza um total de R$ %5.2f\n\n", total_pagar);
	} else {
		printf("Voce nao ultrapassou o limite.\n\n");
		printf("Logo nao tera que pagar nada.\n\n");
	}
	
	system("PAUSE");
	return 0;
}
