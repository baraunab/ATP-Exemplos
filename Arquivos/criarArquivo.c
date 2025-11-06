#include <stdio.h>
#include <stdlib.h>

int main (){
	/*Se o arquivo não puder ser aberto,
	fopen retornará 'NULL' */
	
	FILE *fp = fopen("./docs/arquivo.txt", "w");
	
	if(fp == NULL){
		printf("Erro na abertura do arquivo\n");
		exit(1);
	}
	
	return 0;
}
