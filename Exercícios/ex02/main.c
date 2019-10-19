#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float velo_perm, velo_mot, qnt_ult, total_pagar;
	
	printf("Entre com a velocidade maxima permitida na via:");
	scanf("%f", &velo_perm);
	
	printf("Entre com a velocidade que voce estava dirigindo:");
	scanf("%f", &velo_mot);
	
	qnt_ult = velo_mot - velo_perm;
	
	if (qnt_ult >0 && qnt_ult <= 10){
		total_pagar = 50;
	} else if (qnt_ult > 10 && qnt_ult <= 30){
		total_pagar = 100;
	} else if (qnt_ult > 30){
		total_pagar = 200;
	} else {
		printf("Voce nao ultrapassou o limite.\n\n");
	}
	
	printf("Voce tera que pagar no total em multar R$ %5.2f.\n\n",total_pagar);
	
	
	
	
	system("PAUSE");
	return 0;
}
