#include<stdio.h>
int main(){
	int i,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		//错误，定义的数组h不够大，当输入的数据超过5位数时，数组越界
		int h[5]={0};
		int a,m,t=0,j,k=0,sum=0;
		scanf("%d",&a);
		m=a;
		while(m!=0)
		{
			h[t]=m%10;
			t+=1;
			m/=10;
		}
		for(j=0;j<t;j++)
		{
			if(h[j]==h[t-1-j])
			{
				sum+=h[j];
			}
			else
			{
				k=1;
				printf("no\n");break;
			}
		}
		if(k!=1)
		{
			printf("%d\n",sum);
		}
	}
	return 0;
}

