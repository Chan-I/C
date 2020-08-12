#include <stdio.h>
#include<ctype.h>
#include<limits.h>

int main()
{
	int a, i, m=0,n[UCHAR_MAX]={0};
	while((a = getchar())!=EOF)
	{
		a=tolower(a);
		if(islower(a)&&m<++n[a])
		m=n[a];
		
	}
	printf("%d ",m);
	for(i=0;i<UCHAR_MAX;i++)
	{
		if(n[i]==m)putchar(i);
	}
	printf("\r");
 } 
