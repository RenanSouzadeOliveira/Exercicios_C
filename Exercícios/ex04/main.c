#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num1, num2, num3, num4, soma_par;
	soma_par = 0;
	printf("Entre com o primeiro numero:");
	scanf("%d", &num1);
	
	printf("Entre com o segundo numero:");
	scanf("%d", &num2);
	
	printf("Entre com o terceiro numero:");
	scanf("%d", &num3);
	
	printf("Entre com o quarto numero:");
	scanf("%d", &num4);
	
	if (num1 % 2 == 0){
		soma_par += num1;
	}

	if (num2 % 2 == 0){
		soma_par += num2;
	}	
	
	if (num3 % 2 == 0){
		soma_par += num3;
	}
	
	if (num4 % 2 == 0){
		soma_par += num4;
	}
	
	printf("A soma dos pares e %d.\n\n", soma_par);
	
	system("PAUSE");
	return 0;
}
