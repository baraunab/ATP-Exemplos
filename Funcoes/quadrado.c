#include <stdio.h>
#include <stdlib.h>

int quadrado (int a);

int main (){
	//declaracao de variaveis
	int n1, n2;
	
	//entrada de dados
	printf("Entre com um numero: ");
	scanf("%d", &n1);
	
	//chamada da funcao
	n2 = quadrado(n1);
	
	//resultado
	printf("O quadrado de %d eh: %d", n1, n2);
	
	return 0;
}

int quadrado (int a){
	return a * a;
}
