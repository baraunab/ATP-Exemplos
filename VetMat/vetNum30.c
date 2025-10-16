#include <stdio.h>
#include <stdlib.h>

int main (){
	int numero[10], i;
	
	for (i = 0; i < 10; i++){
		printf("numeros[%d] = ", i);
		scanf("%d",&numero[i]);
	}	
	
	for (i = 0; i < 10; i++){
		if (numero[i] == 30)
			printf("%d ", i);
	}
	
	return 0;
}
