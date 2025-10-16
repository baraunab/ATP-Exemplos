#include <stdio.h>

#define DIM 5

int main (){
	typedef struct{
		char nome[30];
		float matematica, fisica, media;
	} Aluno;
	
	Aluno alunos[DIM];
	int cont;
	
	for (cont = 0; cont < DIM; cont++){
		if(cont > 0){
			getchar();			
		}
		
		printf("\nNome do aluno %d: ", cont+1);
		fgets(alunos[cont].nome, 30, stdin);
		
		printf("Nota de Matemática: ");
		scanf("%f", &alunos[cont].matematica);
		
		printf("Nota de Física: ");
		scanf("%f", &alunos[cont].fisica);
		
		alunos[cont].media = (alunos[cont].matematica + alunos[cont].fisica) / 2;
	}
	
	printf("\n-----\nExibindo nomes e medias: \n-----\n");
	
	for(cont = 0; cont < DIM; cont++){
		printf("\nAluno %d", cont+1);
		printf("\nNome: %s", alunos[cont].nome);
		printf("Media: %.2f\n", alunos[cont].media);
	}
	return 0;
}
