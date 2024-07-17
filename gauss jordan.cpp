#include<stdio.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int i,j,k,n;
double m[20][20],aux;

int main()
{
	
	printf("        <<<<Metodo de Gauss >>>>         ");
	printf("\n Matriz cuadrada de orden N= ");
	scanf("%d",&n);
	printf("\n Digite los elementos de la matriz en la posicion ");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("\n M=[%d,%d]= ",i,j);
			scanf("%lf",&m[i][j]);
		}
		printf("\n Termino independiente de X%d: ",i);
		scanf("%lf",&m[i][n+1]);
		
	}
	
	for(i=1;i<=n;i++)
	{
		if(m[i][i]!=0)
		{
			aux=1/m[i][i];
			for(j=1;j<=n+1;j++)
			{
				m[i][j]=aux*m[i][j];
			}
			
			for(j=1;j<=n;j++)
			{
				if(j!=i)
				{
					aux=-m[j][i];
					for(k=1;k<=n+1;k++)
					{
						m[j][k]=m[j][k]+aux*m[i][k];
					}
				}
			}
		}
	}
	
	printf("\n");
	printf("la matriz identidad es");
	printf("\n\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%f\t",m[i][j]);
		}
		printf("\n\n");
	}
	
	printf("El valor de las incognitas es : ");
	for(i=1;i<=n;i++)
	{
		printf("\nX%d =%f \n",i,m[i][n+1]);
	}
	getchar();
}
