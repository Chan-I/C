#include <stdio.h>
int sum(int n)
{
	if(n<10)
		return n;
	else
		return n%10+sum(n/10);
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("sum=%d\n",sum(n));
	return 0;
}