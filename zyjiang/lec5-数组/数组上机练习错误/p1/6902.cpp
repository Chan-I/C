#include <stdio.h>

int main ()
{
	int m,s,u1,n,u,u4;
	scanf ("%d",&m);
	int a[20][20];
	for ( u=0;u<m;u++)
	{
		
		for (int i=0;i<m;i++)
		{
			scanf ("%d",&a[u][i]);
			
		}
	}
	int q[50]={0};
	
	int i=0;
	for ( u1=0;u1<m;u1++)
	{
		int s=0;
		for (int y=0;y<m;y++)
		{
			s=s+a[u1][y];
		}
		q[i]=s;
		i++;
	}
	for (int y=0;y<m;y++)
	{
		int s=0;
		for (int u=0;u<m;u++)
		{
			s=s+a[u][y];
		}
		q[i]=s;
		i++;
	}
	
	for (u=0,y=0;u<m;)
	{
		//错误：s在循环内清零，则计算结果不正确
	    s=0;
		s=s+a[u][y];
		u++;
		y++;
	}
	q[i]=s;
	i++;

	for (u=m-1,y=m-1;u>=0;)
	{
		//错误：s在循环内清零，则计算结果不正确
		s=0;
		s=s+a[u][y];
		u--;
		y--;
	}
	q[i]=s;
	i++;
	for ( u4=0;u4<i;u4++)
	{
		for (int y=u4+1;y<i;y++)
		{
			if (q[u4]<q[y])
			{
				n=q[y];
				q[y]=q[u4];
				q[u4]=n;
			}
		}
	}
	for (u=0;u<i;u++)
	{
		
		printf("%d ",q[u]);
	}
	printf ("\n");





	
	
	
	return 0;
}

