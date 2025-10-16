#include <stdio.h>
#include <stdlib.h>

int main (){
	int A[5], i;
	
	printf("Entre com os valores de A:\n");	
	for (i = 0; i < 5; i++){
		printf("A[%d] = ", i);
		scanf("%d", &A[i]);
	}
	
	printf("Os valores de A: ");
	for (i = 0; i < 5; i++){
		printf("%d ", A[i]);
	}
	
	return 0;
}
