#include <stdio.h>
int main ()
{
	int m,i,j;
	int a[20][20];
	int sum1[20],sum2[20],zhu,fu;
	int b[50];
	
	scanf("%d",&m);
	
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=m;j++)
			scanf("%d",&a[i][j]);
	}
	for(i=1;i<=20;i++)
	{
		sum1[i]=0;
		sum2[i]=0;
	}
	zhu=0;
	fu=0;

	
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=m;j++)
		{
			sum1[i] += a[j][i];
			 sum2[i] += a[i][j];
			 if (i == j)
				 zhu += a[i][j];
			 if (i+j-1 == m)
				 fu += a[i][j];
		}
		b[i]=sum1[i];
		b[i+m]=sum2[i];
	}

	b[2*m+1]=zhu;
	b[2*m+2]=fu;

	
	for(i=1;i<=2*m+2;i++)
	{
		for(j=i+1;j<=2*m+2;j++)
		{
			int temp;
			temp=0;
			if (b[i] < b[j])
			{
				temp=b[i];
				b[i]=b[j];
				b[j]=temp;
			}
		}
	}	
	for(i=1;i<=2*m+2;i++)
		printf("%d ",b[i]);
	printf("\n");

	return 0; 
}

