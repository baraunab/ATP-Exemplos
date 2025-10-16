/*
	Programa que calcula média aritmética, com vetor e função	
	
	- Crie um programa em C que peça 5 numeros ao usuario, armazene esses dados em um vetor, 
	passe esse vetor para uma funcao que retorna o valor da media dos numeros desse vetor
*/

#include <stdio.h>
#include <stdlib.h>

float media (float numeros[], int n){
	int cont;
	float media = 0.0;
	
	for (cont = 0; cont < n; cont++){
		media += numeros[cont];
	}
	
	return (media/n);
}

int main (){
	//declaracao de variaveis
	float numeros[5];
	int cont;
	
	//entrada de dados
	for (cont = 0; cont < 5; cont++){
		printf("Entre com o numero %d: ", cont + 1);
		scanf("%f", &numeros[cont]);
	}
	
	//saida de dados
	printf("A media desses numeros e: %.2f\n", media(numeros, 5));
	
	return 0;
}
