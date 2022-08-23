#include<stdio.h>
#include<conio.h>

float sensor[4];  // 5 posições

main()
{
	while(1)
	{
		printf("\n capacidade do tanque: ");
		scanf("%f", &sensor[1]);
		printf("\n capacidade do sensor (V): ");
		scanf("%f", &sensor[2]);
		printf("\n sinal do sensor (V): ");
		scanf("%f", &sensor[3]);
		
		sensor[4] = (sensor[2]/sensor[1]);
		sensor[0] = sensor[3]/ sensor[4];
		
		printf(" \n resultado = %f", sensor[0]);		
	}
}
