#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 10

/*
int (*compare)(int a, int b) é um ponteiro para função.
Vamos destrinchar:

    - compare é o nome do parâmetro
    - (*compare) indica que é um ponteiro para função (os parênteses são importantes!)
    - int (...) significa que a função apontada retorna um int
    - (int a, int b) são os parâmetros que essa função recebe

Por que isso é útil?
Isso torna a função de ordenação genérica e flexível! Você pode passar diferentes critérios de comparação
*/

void bolha(int trabalho[], const int tam, int (*compare)(int a, int b));
int ascendente(int a, int b);
int descendente(int a, int b);

int main (){
	int a[TAMANHO] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};
	int cont;
	int ordem; //1 para ordem crescente ou 2 para decrescente
 	
 	printf("Digite 1 para colocar em ordem ascendente: \n");
	printf("Digite 2 para colocar em ordem decrescente: ");
	scanf("%d", &ordem);
	
	printf("\nItens de dados na ordem original:\n");
	for (cont = 0; cont < TAMANHO; cont++){
		printf("%5d", a[cont]);
	}
	
	/* classifica array em ordem crescente. Passa função crescente
	*  como um argumento para especificar classificação crescente
	*/
	if (ordem == 1){
		bolha(a, TAMANHO, ascendente);
		printf("\nItens de dados na ordem ascendente\n");
	} else {
		bolha(a, TAMANHO, descendente);
		printf("\nItens de dados na ordem descendentes\n");
	}
	
	//mostra array ordenado
	for(cont = 0; cont <= TAMANHO - 1; cont++){
		printf("%5d", a[cont]);
	}
	
	printf("\n");
	
	return 0;
}

//metodo bolha
//isso implementa o Strategy Pattern (Padrão Estratégia)
void bolha(int trabalho[], const int tam, int (*compare)(int a, int b)){
	int passada, cont;
	
	//Foward Declaration (Declaração antecipada)
	void inverte(int *elemento1Ptr, int *elemento2Ptr);
	
	for(passada = 1; passada < tam; passada++){
		for (cont = 0; cont < tam - 1; cont++){
			if((*compare)(trabalho[cont], trabalho[cont + 1])){
				inverte(&trabalho[cont], &trabalho[cont + 1]);
			}
		}
	}
}

void inverte(int *elemento1Ptr, int *elemento2Ptr){
	int temp;
	
	temp = *elemento1Ptr;
	*elemento1Ptr = *elemento2Ptr;
	*elemento2Ptr = temp;
}

int ascendente(int a, int b){
	return b < a;
}

int descendente(int a, int b){
	return b > a;
}
