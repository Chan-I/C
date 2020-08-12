#include<stdio.h>
int main(void)
{
	int i=1,n,sum;
	scanf("%d",&n);
	while(i<=n){
		sum=sum*i;
		i++;
	}
	printf("%d",sum);
	return 0;
}
