#include <stdio.h>
#include <stdlib.h>

int main (){
	FILE *fp;
	fp = fopen("./docs/arquivoInsercao.txt", "w");
	if(fp == NULL){
		printf("Erro na abertura
		 do arquivo\n");
		system("pause");
		exit(1);
	}
	
	char texto[25] = "Meu programa em C";
	
	//grava toda a string de uma vez
	int retorno = fputs(texto, fp);
	if(retorno == EOF){
		printf("Erro na gravação !!!\n");
	}
	
	fclose(fp);
	return 0;
}
