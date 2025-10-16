#include <stdio.h>
#include <stdlib.h>

//passagem por referencia (ponteiro)
void soma_mais_um(int *n){
	(*n)++; 									//* = operador de derreferencia / derreferenciação
	printf("Dentro da funcao: x = %d\n", *n);
}

int main (){
	int x = 5;
	
	printf("Antes da funcao: x = %d\n", x);
	soma_mais_um(&x); 							//& = chama o endereço da variável, indica que é ponteiro
	printf("Depois da funcao: x = %d\n", x);	//função muda o valor de x
	
	return 0;
}
