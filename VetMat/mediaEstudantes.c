#include <stdio.h>
#include <stdlib.h>

#define ESTUDANTES 4

int main (){
	int nota[ESTUDANTES], indice, total = 0;
	indice = 0;
	
	while (indice < ESTUDANTES){
		printf("Entre a nota do estudante %d: ", indice);
		scanf("%d", &nota[indice]);
		indice += i;
	}
	
	printf("Notas: ");
	
	indice = 0;
	while(indice < ESTUDANTES){
		printf("%d ", nota[ESTUDANTES]);
		total = total + nota[indice];
		indice += 1;
	}
	
	printf("\nMedia: %d\n", total / ESTUDANTES);
	
	return 0;
}
