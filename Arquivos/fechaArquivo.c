#include <stdio.h>
#include <stdlib.h>

int main () {
	/*Se o arquivo não puder ser aberto,
	fopen retornará NULL*/
	
	FILE *fp = fopen("./docs/arquivo2.txt", "w");
	
	if(fp == NULL){
		printf("Erro na abertura do arquivo\n");
		system("pause");
		exit(1);
	}
	
	/*Fechando o arquivo garante que todos 
	os dados foram salvos com sucesso*/
	fclose(fp);
	return 0;
}
