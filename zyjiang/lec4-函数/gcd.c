#include <stdio.h>
//#include <stdlib.h>

int gcd(int m,int n){
    int i,gcd=1;
    int min=m<n?m:n;
    for(i=1;i<=min;i++){
        if(m%i==0&&n%i==0)//判断i是不是公约数 
            gcd=i;//gcd更新为更大的约数
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



