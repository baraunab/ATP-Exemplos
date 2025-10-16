/*
Construir um programa que conta e imprime o numero
de ocorrencias de uma letra fornecida pelo usuario,
em uma dada string, tambem digitada pelo usuario
*/

#include <stdio.h>
#include <string.h>

int main (){
	//Declaracao de variaveis
	char str[100];
	char letra;
	int i, cont = 0;
	
	//Leitura da string 
	printf("Digite uma string: ");
	fgets(str, sizeof(str), stdin);
	
	//Leitura da letra
	printf("Digite a letra a ser contada: ");
	scanf(" %c", &letra);
	
	//percorre a string 
	for (i = 0; i < strlen(str); i++){
		if (str[i] == letra){
			cont++;
		}
	}
	
	printf("A letra '%c' ocorre %d vezes na string!!", letra, cont);
	
	return 0;
}
