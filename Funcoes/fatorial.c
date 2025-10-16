#include <stdio.h>
#include <stdlib.h>

int fatorial (int n){
	int i, f = 1;
	
	for (i = 1; i <= n; i++){
		f = f * i;
	}
	
	return f;
}

int main (){
	//declaracao de variaveis
	int x, fat;
	
	//entrada de dados
	printf("Digite um numero inteiro positivo: ");
	scanf("%d", &x);
	
	//atribuicao da funcao na variavel
	fat = fatorial(x);
	
	//saida de dados
	printf("O fatorial de %d eh: %d", x, fat);
	
	return 0;
}


