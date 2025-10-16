#include <stdio.h>
#include <stdlib.h>

int soma (int a, int b){
	return a + b;
}

int main (){
	//declaracao de variaveis
	int a, b;
	
	//entrada de dados
	printf("Digite a: ");
	scanf("%d", &a);
	
	printf("Digite b: ");
	scanf("%d", &b);
	
	//saida - soma dos dois valores entrados
	printf("Soma = %d\n", soma(a,b));
	
	return 0;
}
