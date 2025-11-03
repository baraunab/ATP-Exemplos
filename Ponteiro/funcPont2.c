#include <stdio.h>
#include <stdlib.h>
#define TAM 5

void maior_menor(int *v, int tam, int *maior, int *menor){		
	int dmaior = v[0], dmenor = v[0];
	for(int i = 0; i < TAM; i++){
		if (v[i] > dmaior){
			dmaior = v[i];			
		} else if (v[i] < dmenor){
			dmenor = v[i];
		}
	}
	
	*maior = dmaior;
	*menor = dmenor;
}

int main (){
	int v[TAM] = {20, 5, 6, 28, 2};
	int maior, menor;
	
	maior_menor(v, TAM, &maior, &menor);
	for(int i = 0; i < TAM; i++){
		printf("%d ", v[i]);
	}
	
	printf("\nMaior: %d   Menor: %d", maior, menor);
	
	return 0;
}
