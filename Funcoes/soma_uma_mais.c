#include <stdio.h>
#include <stdlib.h>

//passagem por valor da variavel
void soma_mais_um(int n){
	n++;
	printf("Dentro da funcao:x = %d\n", n);
}

int main (){
	int x = 5;
	
	printf("Antes da funcao: x = %d\n", x);
	soma_mais_um(x);
	printf("Depois da funcao: x = %d\n", x);
	
	return 0;
}

//gasta mais memória por criar uma cópia


VC LEMBRA dsclp vc lembra quantas questoes de funcao nos fizemos na utlima aula?

