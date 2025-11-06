#include <stdio.h>
#include <stdlib.h>

int main (){
	int status;
	status = remove("./docs/arquivo.txt");
	if(status != 0){
		printf("Erro na remocao do arquivo!\n");
		system("pause");
		exit(1);
	} else {
		printf("Arquivo removido com sucesso");
	}
	
	return 0;
}
