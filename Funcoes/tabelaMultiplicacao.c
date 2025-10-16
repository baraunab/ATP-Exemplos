#include <stdio.h>
#include <stdlib.h>

//definicao das constantes
#define LIN 5
#define COL 5

//prototipo de funcoes - otimizacao do código
void incializar_arr(int arr[][COL], int); //segundo int se refere a linha!!
void imprime_arr(int arr[][COL], int);

int main (){
	//declaracao de variaveis
	int tabela[LIN][COL];
	
	incializar_arr(tabela, LIN);
	
	printf("\nTabela de Multiplicacao\n\n");

	imprime_arr(tabela, LIN);
	
	return 0;
}

//funcao que inicializa a tabela
void incializar_arr(int arr[][COL], int nLIN){
	int x, y;
	for (x = 0; x < COL; x+= 1){
		for (y = 0; y < nLIN; y+=1){
			arr[x][y] = x * y;
		}
	}
}

//funcao que imprime o array
void imprime_arr(int arr[][COL], int nLIN){
	int x, y;
	
	printf("%6d", 0);
	for (y = 1; y < nLIN; y += 1)
		printf("%3d", y);
	printf("\n");
	
	printf(" ");
	for (y = 0; y < 3.4*COL; y += 1)
		printf("_");
	printf("\n");
	
	for (x = 0; x < nLIN; x += 1){
		printf("%2d|", x);
		for(y = 0; y < COL; y += 1)
			printf("%3d", arr[x][y]);
		printf("\n");
	}
}
