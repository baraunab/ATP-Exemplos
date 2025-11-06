#include <stdio.h>
#include <stdlib.h>

struct cadastro {
	char nome[50], endereco[50];
	int idade;
};

int main (){
	FILE *fp;
	fp = fopen("./docs/struct.txt", "rb");
	if(fp == NULL){
		printf("Erro na abertura do arquivo\n");
		system("pause");
		exit(1);
	}
	
	struct cadastro cad;
	fread(&cad, sizeof(struct cadastro), 1, fp);
	
	printf("%s \n %s \n %d", cad.nome, cad.endereco, cad.idade);
	fclose(fp);
	
	return 0;
}
