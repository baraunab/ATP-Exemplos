#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cadastro{
	char nome[50], rua[50];
	int idade, numero;
};

int main (){
	struct cadastro c[5];
	int i;
	
	printf("Entre com os dados cadastrais:\n ");
	for (i = 0; i < 5; i++){
		getchar(); //limpa buffer

		printf("Entre com o nome: ");
		fgets(c[i].nome, 50, stdin);
				
		printf("Entre com idade: ");
		scanf("%d", &c[i].idade);
	
		getchar();
		
		printf("Entre com nome da rua: ");
		fgets(c[i].rua, 50, stdin);
		
		printf("Entre com o numero da casa: ");
		scanf("%d", &c[i].numero);
		
		putchar('\n');
	}
	
	
	return 0;
}
