#include <stdio.h>
#include <stdlib.h>

int main (){
	FILE *fp;
	fp = fopen("./docs/vetor.txt", "rb");
	if(fp == NULL){
		printf("Erro na abertura do arquivo\n");
		system("pause");
		exit(1);
	}
	//Lê o que foi gerado no arqFwrite.c
	int totalLido, v[5];
	totalLido = fread(v, sizeof(int), 5, fp);
	if(totalLido != 5){
		printf("Erro na leitura\n");
		system("pause");
		exit(1);
	}
	
	char str[20]; // = Hello World!
	float x; // = 5
	int v[5]; // = {1, 2, 3, 4, 5}
	
	fread(str, sizof(char), 20, fp);
	fread(&x, sizeof(float), 1, fp);
	fread(v, sizeof(int), 5, fp);
	
	printf("%s\n %f\n", str, x);
	printf("%d, %d, %d, %d, %d\n", v[0], v[1], v[2], v[3], v[4]);
	fclose(fp);
	
	return 0;
}
