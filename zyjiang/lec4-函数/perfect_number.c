#include <stdio.h>
//#include <stdlib.h>

int isPerfectNumber(int n){
    int i,sum;
    for(i=1,sum=0;i<=n/2;i++){
        if(n%i==0)
            sum+=i;
    }
    return sum==n;
}
int main()
{
	int n;

	for(n=1;n<=10000;n++)
	{
		//调用函数判断n是不是完数 
		if(isPerfectNumber(n))
			printf("%d\n",n);
	}
	system("pause");
	return 0;
}
