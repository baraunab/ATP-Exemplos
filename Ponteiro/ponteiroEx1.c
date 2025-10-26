#include <stdio.h>
#include <stdlib.h>

int main(){
	int a = 2, b = 3, c = 0, d = 0;
	int *p, *q;
	
	p = &a;
	q = &b;
	d = *p + *q;
	
	c = a + b;
	
	printf("%d\n", c);
	printf("%d\n", d);
	
	return 0;
}
