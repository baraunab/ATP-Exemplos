#include <stdio.h>

enum semana {Domingo = 5, Segunda, Terca, Quarta = 1, Quinta, Sexta, Sabado};

int main (){
	printf("Domingo = %d\n", Domingo);
	printf("Segunda =  %d\n", Segunda);
	printf("Terca =  %d\n", Terca);
	printf("Quarta =  %d\n", Quarta);
	printf("Quinta =  %d\n", Quinta);
	printf("Sexta =  %d\n", Sexta);
	printf("Sabado =  %d\n", Sabado);
	
	return 0;
}
