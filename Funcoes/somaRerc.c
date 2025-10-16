#include <stdio.h>
#include <stdlib.h>

//soma todos os numeros inteiros positivos até chegar em 'n'
int soma (int n){
	if (n == 0)
		return 0;
	else
		return n + soma(n-1)
}

int main (){
	//declaracao de variaveis
	int n, s;
	
	//entrada de dados
	printf("n = ");
	scanf("%d", &n);
	
	s = soma(n);
	
	//saida
	printf("Soma = %d\n", s);
	
	return 1;
}
