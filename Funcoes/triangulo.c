#include <stdio.h>
#include <stdlib.h>

//definicao das constantes
#define ALTURA 5
#define LARGURA 5

/*	
	não é preciso informar o nome da matriz no parametro da funcao, 
	apenas informar o tipo e adicionar a dimensão à direta
*/

//protótipos das funções
void selecione_elem(int [][LARGURA], int);
void pontos(int [][LARGURA], int);
void imprime_matriz(int [][LARGURA], int);
void marca_triang(int [][LARGURA], int);
void flip(int [][LARGURA], int);
void espera_entrada(void);

void selecione_elem(int matriz[][LARGURA], int nLIN){
	int x, y;

	printf("\nEntre com as coordenadas na forma x, y (2,4).\n");
	printf("Use numeros negativos para terminar.\n");
	
	while(1){
		printf("Coordenadas: ");
		scanf("%d, %d", &x, &y);
		if (y >= 0 && x >= 0){	
			matriz[x][y] = '#177';
			imprime_matriz(matriz, nLIN);
		} else {
			break;
		}
	}
}

//definicao das implementacoes das funcoes
void pontos(int matriz[][LARGURA], int nLIN){
	int x, y;
	
	for (x = 0; x < nLIN; x += 1){
		for (y = 0; y < LARGURA; y += 1){
			matriz[x][y] = '.';
		}
	}
}

void imprime_matriz(int matriz[][LARGURA], int nLIN){
	int x, y;
	
	for (x = 0; x < nLIN; x += 1){
		for (y = 0; y <= x; y += 1){
			printf("%c ", matriz[x][y]);
		}
	}
	
}

void marca_triang(int matriz[][LARGURA], int nLIN){
	int x, y;
	
	printf("Triangulo\n");
	pontos(matriz, nLIN);
	
	for (x = 0; x < nLIN; x += 1){
		for (y = 0; y < LARGURA; y += 1){
			matriz[x][y] = '\xB1';
		}
	}
	printf("\n");
}

void espera_entrada(void){
	getchar();
}

void flip(int matriz[][LARGURA], int nLIN){
	int x, y, temp;
	
	printf("Flipado ao longo da diagonal principal.\n");
	for (x = 0; x < nLIN; x += 1){
		for (y = 0; y <= x; y += 1){
			temp = matriz[x][y];
			matriz[x][y] = matriz[y][x];
			matriz[y][x] = temp;
		}
	}
}


int main (){
	int matriz[ALTURA][LARGURA];
	
	pontos(matriz, ALTURA);
	selecione_elem(matriz, ALTURA);
	espera_entrada();
	
	flip(matriz, ALTURA);
	imprime_matriz(matriz, ALTURA);
	espera_entrada();
	
	marca_triang(matriz, ALTURA);
	imprime_matriz(matriz, ALTURA);
	espera_entrada();
	
	flip(matriz, ALTURA);
	imprime_matriz(matriz, ALTURA);
	espera_entrada();
	
	return 0;
}
