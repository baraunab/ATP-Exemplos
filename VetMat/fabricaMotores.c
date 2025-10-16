#include <stdio.h>

int main (){
	//Declaracao de variaveis
	int producao[12][2], CLM[12][2];	//Producao mensal de cada motor
	int valores [2][2];					//Custo e lucro mensais dos motores
	int CLA[2];							//Custo e lucro anuais dos motores
	int i, j, k;						//
	
	printf("Entre com a producao mensal de cada motor: \n");
	
	for (i = 0; i < 12; i++){
		printf("\n");
		for (j = 0; j < 2; j++){
			printf("producao[%d][%d] = ", i+1, j+1);
			scanf("%d", &producao[i][j]);
		}
	}
	
	printf("\n\nEntre com o custo e o lucro de cada motor: \n");
	for (i = 0; i < 2; i++){
		printf("\n");
		for (j = 0; j < 2; j++){
			printf("Valores[%d][%d] = ", i+1, j+1);
			scanf("%d", &valores[i][j]);	
		}
	}
	
	/* Calculo do custo e do lucro mensais */	
	for (i = 0; i < 12; i++){
		for (j = 0; j < 2; j++){
			CLM[i][j] = 0;
			for (k = 0; k < 2; k++){
				CLM[i][j] = CLM[i][j] + producao[i][k] * valores[k][j];
			}
		}
	}
		
	/* Calculo do custo e do lucro anuais */	
	for (j = 0; j < 2; j++){
		CLA[j] = 0;
		for (i = 0; i < 12; i++){
			CLA[j] = CLA[j] + CLM[i][j];
		}
	}
	
	/* Escrita dos resultados obtidos */
	printf("\n\nCusto e lucro mensal de cada motor\n");
	for (i = 0; i < 12; i++){
		for (j = 0; j < 2; j++){
			printf("CLM[%d][%d] = %d\n", i+1, j+1, CLM[i][j]);
			
		}
	
	}
	
	printf("\n\nCusto anual = %d - Lucro Anual = %d", CLA[0], CLA[1]);
	
	return 0;
}
