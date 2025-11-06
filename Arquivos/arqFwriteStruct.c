#include <stdio.h>
#include <stdlib.h>

struct cadastro {
	char nome[50], endereco[50];
	int idade;
};

int main (){
	FILE *fp;
	fp = fopen("./docs/struct.txt", "wb");
	if(fp == NULL){
		printf("Erro na abertura do arquivo\n");
		system("pause");
		exit(1);
	}
	
	struct cadastro cad = {"Anderson", "Rua L", 28};
	fwrite(&cad, sizeof(struct cadastro), 1, fp);
	
	fclose(fp);
	return 0;
}
