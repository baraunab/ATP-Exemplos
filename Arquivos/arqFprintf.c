#include <stdio.h>
#include <stdlib.h>

int main (){
	char nome[20] = "Anderson";
	int i = 31;
	float a = 1.70;
	
	FILE *fp = fopen("./docs/cad.txt", "w");
	
	if(fp == NULL){
		printf("Erro na abertura do arquivo.\n");
		system("pause");
		exit(1);
	}
	
	printf("Nome: %s\n Idade: %d \n Altura: %f", nome, i, a);
	fprintf(fp, "Nome: %s\n Idade: %d \n Altura: %f", nome, i, a);
	
	fclose(fp);
	return 0;
}
