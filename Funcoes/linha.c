#include <stdio.h>
#include <stdlib.h>

void imprime (int n){
	int i;
	
	for (i = 1; i <= n; i++){
		printf("Linha %d \n", i);
	}
}

int main (){
	//funcao imprime a quantidade de linhas informadas no parametro
	imprime(15);
	
	return 0;
}
