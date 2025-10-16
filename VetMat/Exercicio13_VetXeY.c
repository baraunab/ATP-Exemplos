/*13. Leia dois vetores de inteiros X e Y, cada um com 5 elementos (assuma que o usuário não
informa elementos repetidos). Calcule e mostre os vetores resultantes em cada caso abaixo:

	- Soma entre X e Y: soma de cada elemento de X com o elemento da mesma posição em Y.
	- Produto entre X e Y: multiplicação de cada elemento de X com o elemento da mesma posição em Y.
	- Diferença entre X e Y: todos os elementos de X que não existam em Y.
	- Interseção entre X e Y: apenas os elementos que aparecem nos dois vetores.
	- União entre X e Y: todos os elementos de X, e todos os elementos de Y que não estão em X.*/
	
#include <stdio.h>

#define N 5
int main (){
	//Declaracao de variaveis
	int X[N], Y[N];
	int i, j;
	
	//Entrada de dados
	printf("Digite 5 elementos para o vetor X: \n");
	for (i = 0; i < N; i++){
		printf("\nX[%d] = ", i);
		scanf("%d", &X[i]);
	}
	
	printf("Digite 5 elementos para o vetor Y: ");
	for (j = 0; j < N; j++){
		printf("\nY[%d] = ", j);
		scanf("%d", &Y[j]);
	}
	
	//Processamento
	//Soma de X e Y
	printf("\nSoma entre X e Y: ");
	for (i = 0; i < N; i++){
		printf("\n%d + %d = %d", X[i], Y[i], X[i] + Y[i]);
	}
	
	//Diferenca
	printf("\nDiferenca entre X e Y: \n");
	for (i = 0; i < N; i++){
		int existe = 0;
		for (j = 0; j < N; j++){
			if (X[i] == Y[j]){
				existe = 1;
				break;
			}
		}
		if (!existe){
			printf("%d ", X[i]);
		}
	}
	
	//Intersecao
	printf("\nIntersecao entre X e Y: ");
	for (i = 0; i < N; i++){
		for (j = 0; j < N; j++){
			if (X[i] == Y[i]){
				printf("%d ", X[i]);
			}
			
		}
	}
	
	//Uniao
	printf("\nUniao entre X e Y: ");
	for (i = 0; i < N; i++){
		printf("%d ", X[i]);
	}
	
	for (i = 0; i < N; i++){
		int existe = 0;
		for (j = 0; j < N; j++){
			if (X[i] == Y[j]){
				existe = 1;
				break;
			}
		}
		if (!existe) {
			printf("%d ", Y[i]);
		}
	}
	
	printf("\n");
	return 0;
}
