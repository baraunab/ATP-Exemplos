#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
	FILE *fp = fopen("./docs/arquivo3.txt", "r");
	if (fp == NULL){
		printf("Erro na abertura do arquivo\n");
		system("pause");
		exit(1);
	}
	
	char c = fgetc(fp);
	while(!feof(fp)){
		printf("%c", c);
		c = fgetc(fp);
	}
	
	printf("\nFIM\n");
	fclose(fp);
	
	return 0;
}
