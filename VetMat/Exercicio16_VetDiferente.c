/*16. Faça um programa para ler 10 números DIFERENTES a serem armazenados em um vetor.
Os dados deverão ser armazenados no vetor na ordem que forem sendo lidos, sendo que
caso o usuário digite um número que já foi digitado anteriormente, o programa deverá pedir
para ele digitar outro número. Note que cada valor digitado pelo usuário deve ser pesquisado
no vetor, verificando se ele existe entre os números que já foram fornecidos. Exibir na tela o
vetor final que foi digitado.*/

#include <stdio.h>

int main (){
	//Declaracao de variaveis
	int vetor[10];
	int i, j, num, repetido;
	
	printf("Digite 10 numeros diferentes: \n");
	for (i = 0; i < 10; i++){
		do {
			printf("V[%d] = ", i+1);
			scanf("%d", &num);
			
			//Verificar se ja foi digitado
			repetido = 0;
			for (j = 0; j < i; j++){
				if (vetor[j] == num){
					repetido = 1;
					printf("Valor repetido!! Digite outro.\n");
					break;
				}
			}
		}while(repetido == 1);
		
		vetor[i] = num;
	}
	 
	//Saida de dados
	printf("\n= Valores do vetor =\n");
	for (i = 0; i < 10; i++){
		printf("%d ", vetor[i]);
	}
	
	return 0;
}
