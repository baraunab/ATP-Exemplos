#include <stdio.h>
#include <string.h>

#define LEN 50

struct endereco{
	char rua[LEN];
	int numero;
};

struct cadastro{
	char nome[LEN];
	int idade;
	struct endereco ender;
};

int main (){
	struct cadastro c;
	
	printf("Entre com o nome: ");
	fgets(c.nome, LEN, stdin);

	printf("Entre com a idade: ");
	scanf("%d", &c.idade);
	
	printf("Entre com o a rua: ");
	fgets(c.ender.rua, LEN, stdin);
	
	printf("Entre com o numero: ");
	scanf("%d", &c.ender.numero);
	
	return 0;
}
