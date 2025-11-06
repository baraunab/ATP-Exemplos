#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
	FILE *fp = fopen("./docs/arquivo3.txt", "w");
	if (fp == NULL){
		printf("Erro na abertura do arquivo\n");
		system("pause");
		exit(1);
	}
	
	char frase[25] = "Abrindo arquivos em C";
	int i;
	
	//grava a string de caractere a caractere
	for(i = 0; i < strlen(frase); i++){
		fputc(frase[i], fp);
		fputc('-', fp);
	}
	
	fclose(fp);
	
	return 0;
}
