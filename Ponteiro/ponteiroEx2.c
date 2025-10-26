#include <stdio.h>
#include <stdlib.h>

int main (){
	int a = 2, b = 7, c = 0;

	int *p;
	int **r; //r é um ponteiro para ponteiro para inteirpop
	p = &a;	 //p aponta para a
	r = &p;	 //r aponta para p e *r aponta para a
	c = **r + b;
	
	printf("%d\n", c);
	
	return 0;
}
