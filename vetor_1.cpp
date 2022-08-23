#include<stdio.h>
#include<conio.h>

int calc[4];  // 4 posições

main()
{
	while(1)
	{
		printf("\n V1: ");
		scanf("%d", &calc[2]);
		printf("\n V2: ");
		scanf("%d", &calc[3]);
		calc[0] = calc[2] + calc[3];
		calc[1] = calc[2] - calc[3];
		printf(" \n SOMA = %d", calc[0]);
		printf(" \n SUBTRACAO= %d", calc[1]);
		printf(" \n VALORES = %d %d ", calc[2], calc[3]);
	}
}



