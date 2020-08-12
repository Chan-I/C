#include <stdio.h>

int main(){
	int x[100],y[100];
	int n=0,i=1;
	//控制台输入时无法结束
	while(scanf("%d",&x[n]))
		n++;
	//y[n-1]和x[0]没有交换
	while(i<n)
	{
		y[i-1]=x[n-i];
		i++;
		printf("%d",y[i-1]);
	}
	system("pause");
	return 0;
}
