//使用数组求Fibonacci数列

#include <stdio.h>
#include <stdlib.h>

int main(){
    int fib[40]={1,1},i;
    for(i=0;i<40;i++){
        if(i>1)//计算fib(n)
            fib[i]=fib[i-1]+fib[i-2];
        printf("Fib(%d)=%d\n",i,fib[i]);
    }
	system("pause");
    return 0;
}
