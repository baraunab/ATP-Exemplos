#include <stdio.h>
#include <stdlib.h>

/*
	
*/

int fat (int n){
	if (n == 0)
		return 1;
	else
		return n*fat(n-1);
}

int main (){
	//declaração de variaveis
	int numero, fatorial = 0;
	
	//entrada de dados
	printf("Informe um valor: ");
	scanf("%d", &numero);
	
	//funcao do calculo de fatorial
	fatorial = fat(numero);
	
	//saida de dados
	printf("\n\t%d! = %d\n", numero, fatorial);
	
	return 0;
}
