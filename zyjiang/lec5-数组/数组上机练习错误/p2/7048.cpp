#include "stdio.h"
#include "math.h"
//�ж�һ������λ��
int pdws(int a)
{
	int ws=0;
	while(a!=0)
	{
		a=a/10;
		ws++;
	}
	return ws;
}
int pdhs(int n)
{ 
	int n1,s=0;  
	n1=n;
	while(n!=0) 
	{  
		s=s*10+n%10; 
		n/=10;
	} 
	if(n1==s) 
	{
		return 1;
	}
	else
	{
		return 0;
	}
}



int main()

{
	int m,shuzi,i,ws,cishu,yorn,q=1;
	scanf ("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&shuzi);
		ws=pdws (shuzi);
		//����λ��С��3�Ͳ����ǻ�������
		if (ws<3)
		{
			printf ("no\n");
		}
		else
		{
			yorn=pdhs(shuzi);
			//����0Ҳ�ǻ�������ʵ��������1λ�����ǻ�����
			if (yorn)
			{
				
				
				
				int zonghe=0;
				while(shuzi!=0)
				{
					zonghe=shuzi%10+zonghe;
					shuzi=shuzi/10;
				}
				printf("%d\n",zonghe);
			}
			
			else
			{
				printf ("no\n");
			}
			
		}
		
		
		
		
	}
}








