#include <stdio.h>
#include <stdlib.h>

int main (){
	FILE *fp;
	fp = fopen("./docs/vetor.txt", "wb");
	if(fp == NULL){
		printf("Erro na abertura do arquivo\n");
		system("pause");
		exit(1);
	}
	
	int totalGrav, v[5] = {1, 2, 3, 4, 5};
	
	//grava todo o array no arquivo (5 posições) 
	totalGrav = fwrite(v, sizeof(int), 5, fp);
	if(totalGrav != 5){
		printf("Erro na escrita\n");
		system("pause");
		exit(1);
	}
	
	fclose(fp);
	return 0;
}
