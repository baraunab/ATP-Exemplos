#include <stdio.h>
#include <stdlib.h>

//imprime um caractere de uma string de cada vez
void imprimeCaracteres(const char*);

int main (){
	char string[] = "imprime caracteres de uma string";
	
	printf("String:\n");
	imprimeCaracteres(string);
	putchar('\n');
	
	return 0;
}

//usando um ponteiro nao constante para um dado constante
void imprimeCaracteres(const char *s){
	for (; *s != '\0'; s++){ //nenhuma inicializacao
		putchar(*s);
	}
}
