#include <stdio.h>
#include <stdlib.h>

//converte letras minusculas para maiusculas
void converterParaMaiuscula(char *);

int main (){
	char string[] = "caracteres";
	
	printf("String antes da conversao: %s\n", string);
	converterParaMaiuscula(string);
	
	printf("String apos a conversao: %s\n", string);
	
	return 0;
}

void converterParaMaiuscula(char *s){
	while(*s != '\0'){
		if(*s >= 'a' && *s <= 'z'){
			*s -= 32;	//converte para a letra maiuscula ASCII
		}
		++s; 			//incrementa s para apontar para o proximo caractere
	}
}

