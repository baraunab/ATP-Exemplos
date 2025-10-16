#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	//Declaração de variáveis
	int codigo[11], estoque[11];
	int cliente, i, mercadoria, n, quantidade;
	setlocale(LC_ALL, "Portuguese");
	
	//Leitura e escrita do estoque inicial
	i = 0;
	
	printf("Entre com o código da mercadoria e a quantidade em estoque: \n");
	printf("Código[%d] = ", i+1);
	scanf("%d", &codigo[i]);
	printf("Estoque[%d] = ", i+1);
	scanf("%d", &estoque[i]);
	
	while(codigo[i] != 9999){
		i++;
		printf("Código[%d] = ", i+1);
		scanf("%d", &codigo[i]);
		printf("Estoque[%d] = ", i+1);
		scanf("%d", &estoque[i]);
	}
	
	puts("\n");
	n = i-1;
	printf("Entre com o código do Cliente, o código da mercadoria e a quantidade\n");
	printf("Código do Cliente = ");
	scanf("%d", &cliente);
	printf("Código da mercadoria = ");
	scanf("%d", &mercadoria);
	printf("Quantidade = ");
	scanf("%d", &quantidade);
	
	while(cliente != 9999){
		//Verificação da existência da mercadoria
		i = 0;
		while ((i != n) && (mercadoria != codigo[i])){
			i++;
		if (mercadoria == codigo[i]){
			if(estoque[i] >= quantidade){
				estoque[i] = estoque[i] - quantidade;
			} else {
				printf("\nCaro cliente %d nao temos a mercadoria %d em estoque suficiente", cliente, mercadoria);			
			}
		} else {
			printf("\nCaro cliente %d nao existe a mercadoria %d pedida\n\n", cliente, mercadoria);
		}
		printf("Codigo do Cliente = ");
		scanf("%d", &cliente);
		printf("Codigo da mercadoria = ");
		scanf("%d", &mercadoria);
		printf("Quantidade = ");
		scanf("%d", &quantidade);
		}		
	}
		//Escrita do estoque final
		i = 0;
		printf("\nCodigo \t\tEstoque\n");
		while(codigo[i] != 9999){
			printf("%d\t\t%d\n", codigo[i], estoque[i]);
			i++;
		}
	return 0;
}
