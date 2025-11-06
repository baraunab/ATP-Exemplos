#include <stdio.h>
#include <stdlib.h>

int main (){
	FILE *fp = fopen("./docs/arquivo4.txt", "r");
	
	if(fp == NULL){
		printf("Erro na abertura do arquivo\n");
		system("pause");
		exit(1);
	}
	
	char c;
	int i;
	
	//Lê 1 caractere por vez, apenas os 10 primeiros
	for (i = 0; i < 10; i++){
		c = fgetc(fp);
		printf("%c", c);
	}
	
	/*
	//Lê 1 caractere por vez até encontrar o EOF (End Of File)
	while(c != EOF){
		c = fgetc(fp);
		printf("%c", c);
	}
	*/
	printf("\nFIM");
	fclose(fp);
	
	return 0;
}
