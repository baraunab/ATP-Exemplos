#include <stdio.h>
#include <stdlib.h>

int main (){
	FILE *fp;
	fp = fopen("./docs/dados.txt");
	if(fp == NULL){
		printf("Erro na abertura do arquivo\n");
		system("pause");
		exit(1);
	}
	
	char str[20] = "Hello World!";
	float x = 5;
	int v[5] = {1, 2, 3, 4, 5};
	
	//lembrete: vetores não precisam de &
	fwrite(str, sizeof(char), 20, fp);
	fwrite(&x, sizeof(float), 1, fp);
	fwrite(v, sizeof(int), 5, fp);
	fclose(fp);
		
	return 0;
}
