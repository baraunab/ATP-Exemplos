#include <stdio.h>
#include <stdlib.h>

int main (){
	int M[6], i;
	
	for (i = 0; i < 6; i++){
		M[i] = 2;
	}
	
	printf("Os valores de M:");

	for (i = 0; i < 6; i++){
		printf("%d ", M[i]);
	}	
	
	system("pause");
	
	return 0;	
}
