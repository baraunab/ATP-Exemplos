#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cadastro{
	char nome[50];
	int idade;
	char rua[50];
	int numero;
};

int main (){
	struct cadastro c;
	
	printf("Entre com o nome: ");
	fgets(c.nome, 50, stdin);
	c.nome[strlen(c.nome) - 1] = '\0';
	//"nome\n\0" - 1 (que eh o '\n'), resulta em "nome\0\0"
	
	
	printf("Entre com a idade: ");
	scanf("%d", &c.idade);
	
	getchar(); //limpeza de buffer
	
	printf("Entre com o nome da rua: ");
	fgets(c.rua, 50, stdin);
	
	printf("Entre com o numero da sua casa: ");
	scanf("%d", &c.numero);
	
	printf("Nome: %s Idade: %d\nRua: %s Numero: %d", c.nome, c.idade, c.rua, c.numero);
	
	return 0;
}
