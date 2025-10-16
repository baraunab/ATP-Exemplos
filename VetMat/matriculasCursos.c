#include <stdio.h>
#include <stdlib.h>

int main (){
	int PC[151];
	int CN[151];
	int i, j;
	i = 1;
	
	//Leitura da matricula dos alunos que estao cursando Programação de Comutacao
	printf("Entre com as matriculas dos alunos de Programacao de Computadores: \n");
	printf("PC[%d] = ", i);
	scanf("%d", &PC[i]);
	
	while (PC[i] != 9999){
		i++;
		printf("PC[%d] = ", i);
		scanf("%d", &PC[i]);
	}
	
	//Leitura da matricula dos alunos que estao cursando Calculo Numerico
	i = 1;
	printf("Entre com as matriculas dos alunos de Calculo Numero\n");
	printf("CN[%d] = ", i);
	scanf("%d", &CN[i]);
	
	//Verificação da matricula simultanea em CN e PC
	while (CN[i] != 9999){
		i++;
		printf("CN[%d] = ", i);
		scanf("%d", &CN[i]);
	}
	
	i = 1;
	while (CN[i] != 9999){
		j = 1;
		while ((CN[j]) != 9999 && (PC[i] != CN[j]))
			j++;
		
		if ((PC[i] != 9999) && (PC[i] == CN[j])){
			printf("\nmatricula = %d\n", PC[i]);
		} else 
			printf("\nNao ha alunos matriculados em ambas as disciplinas");
		
			
		i++;	
	}

	return 0;
		
}
