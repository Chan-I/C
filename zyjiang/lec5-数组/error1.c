#include <stdio.h>

int main(){
	int x[100],y[100];
	int n=0,i=1;
	//����̨����ʱ�޷�����
	while(scanf("%d",&x[n]))
		n++;
	//y[n-1]��x[0]û�н���
	while(i<n)
	{
		y[i-1]=x[n-i];
		i++;
		printf("%d",y[i-1]);
	}
	system("pause");
	return 0;
}
