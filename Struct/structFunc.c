#include <stdio.h>
#include <string.h>

#define LEN 50

struct endereco{
	char rua[LEN];
	char cidade_estado_cep[LEN];
};

//prototipos de funcoes
struct endereco obtem_endereco();
void imprime_endereco(struct endereco);

int main (){
	struct endereco residencia;
	
	printf("Entre com seu endereco residencial:\n");
	residencia = obtem_endereco();
	
	printf("\nSeu endereco e:\n");
	imprime_endereco(residencia);
	
	return 0;
}

struct endereco obtem_endereco(){
	struct endereco ender;
	
	printf("\tEntre com o nome da rua: ");
	fgets(ender.rua, LEN, stdin);
	
	printf("\tEntre com cidade, estado e CEP:");
	fgets(ender.cidade_estado_cep, LEN, stdin);
	
	return ender;
}

void imprime_endereco(struct endereco ender){
	printf("\t %s\n", ender.rua);
	printf("\t %s\n", ender.cidade_estado_cep);
}
