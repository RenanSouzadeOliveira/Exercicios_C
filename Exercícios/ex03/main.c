#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int valor1, valor2, valor3, sort1, sort2, sort3, acertos;
	
	printf("Entre com o valor do primerio numero apostado:");
	scanf("%d", &valor1);
	
	printf("Entre com o valor do segundo numero apostado:");
	scanf("%d", &valor2);
	
	printf("Entre com o valor do terceiro numero apostado:");
	scanf("%d", &valor3);
	
	printf("Agora entre com o primeiro valor apostado:");
	scanf("%d", &sort1);
	
	printf("Entre com o valor do segundo valor apostado:");
	scanf("%d", &sort2);
	
	printf("Entre com o valor do terceiro valor apostado:");
	scanf("%d", &sort3);
	
	acertos = 0;
	
	if (valor1 == sort1 || valor1 == sort2 || valor1 == sort3){
		acertos += 1;
	}
	
	if (valor2 == sort1 || valor2 == sort2 || valor2 == sort3){
		acertos += 1;
	}
	
	if (valor3 == sort1 || valor3 == sort2 || valor3 == sort3){
		acertos += 1;
	}
	
	printf("Voce teve um total de %d acertos.\n\n", acertos);
	
	
	
	system("PAUSE");
	return 0;
}
