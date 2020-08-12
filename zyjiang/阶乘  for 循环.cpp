#include<stdio.h> 
int main(void)
{
	int n,i,sum;
	scanf("%d",&n);
	sum=1;
	for(i=1;i<=n;i++){
		sum=sum*i;
	}
	printf("%d",sum);
	return 0;
} 
