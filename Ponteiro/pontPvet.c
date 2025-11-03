#include <stdio.h>
#include <stdlib.h>

/*
 * Cada posicao de uma array de ponteiro pode armazenar o endereco
 * de uma variavel ou o endereco da posicao inicial de um outro array
 */

int main (){
	int *pvet[2];
	int x = 10, y[2] = {20, 30};
	
	pvet[0] = &x;
	pvet[1] = y;
	
	//Imprime o endereco das variaveis
	printf("Endereco de pvet[0]: %p\n", pvet[0]);
	printf("Endereco de pvet[1]: %p\n", pvet[1]);
	//Imprime o conteudo de uma variavel
	printf("Conteudo em pvet[0]: %d\n", *pvet[0]);
	//Imprime a posicao do vetor 
	printf("Endereco de pvet[1][1]: %d\n", pvet[1][1]);
	
	return 0;
}
