#include <stdio.h>
#define N 4 //linhas i
#define M 5 //colunas j

//NxM

int main()
{
	int i,l,c,j,z=0;
	char linha[N],coluna[M],matriz[N][M],matriz1[N][M];


	printf("Digite 5 letras em 4 colunas. X para bombas e L para espaço livre\n");

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 5; j++)
		{
			scanf("%c",&matriz[i][j]);
			getchar();
			matriz[N][M] = z;
			z++;
			printf("\t%c\t", matriz[i][j]);	
		}
	}
	
	printf("\n");

	return 0;
}	