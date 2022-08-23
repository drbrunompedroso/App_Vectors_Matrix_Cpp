#include<stdio.h>
#include<conio.h>

int calc[16][16];  // 16 linhas 16 colunas

main()
{
	while(1)
	{
		printf("\n V1: ");
		scanf("%d", &calc[0][0]);  // linha 1 coluna 1
		printf("\n V2: ");
		scanf("%d", &calc[1][0]);  // linha 2 coluna 1
		
		calc[3][0] = calc[0][0] + calc[1][0];  // linha 4 coluna 1
		calc[4][0] = calc[0][0] - calc[1][0];  // Linha 5 coluna 1
		
		printf(" \n resultado = %d", calc[3][0]);
		printf(" \n resultado = %d", calc[4][0]);
	}
}




