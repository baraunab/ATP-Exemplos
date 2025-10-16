#include <stdio.h>
#include <stdlib.h>

int main (){
	int notas[100];
	int i;
	for (i = 0; i < 10; i++){
		printf("Digite a nota do aluno %d: ", i+1);
		scanf("%d", &notas[i]);
	}
	
	for (i = 0; i < 10; i++){
		printf("\nnota %d: %d", i+1, notas[i]);
	}
	
	system("pause");
	
	return 0;	
}
