#include <stdio.h>
//#include <stdlib.h>

int gcd(int m,int n){
    int i,gcd=1;
    int min=m<n?m:n;
    for(i=1;i<=min;i++){
        if(m%i==0&&n%i==0)//�ж�i�ǲ��ǹ�Լ�� 
            gcd=i;//gcd����Ϊ�����Լ��
    }
    return gcd;
}

int main()
{
	int m=32,n=48,i;

	printf("the gcd of %d and %d is %d\n",m,n,gcd(m,n));
	system("pause");
	return 0;
}



