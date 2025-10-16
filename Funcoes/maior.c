#include <stdio.h>
#include <stdlib.h>

int maior (int x, int y){
	int z;
	if (x > y){
		z = x;
	} else{
		z = y;
	}
	
	return z;	
}

int main (){
	//declaracao de variaveis
	int a, b;
	
	//entrada de dados
	printf("Informe o primeiro numero: ");
	scanf("%d", &a);
	
	printf("Informe o segundo numero: ");
	scanf("%d", &b);
	
	//saida de dados - informa o maior entre os dois valores 
	printf("\nO maior valor eh %d", maior(a, b));
		
}
