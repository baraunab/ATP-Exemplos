#include <stdio.h>
#include <stdlib.h>

/*
 * Em um ponteiro para ponteiro, o primeiro ponteiro contem
 * o endereço do segundo ponteiro que aponta para uma variável
 * com o valor desejado
 */

int main (){
	int x = 10;
	int *p = &x;
	int **p2 = &p;
	
	//Endereco em p2
	printf("Endereco em p2: %p\n", p2);
	//Conteudo do endereco
	printf("Conteudo em  *p2: %p\n", *p2);
	//Conteudo do endereco do endereco
	printf("Conteudo em **p2: %d\n", **p2);
	
	return 0;
}
