#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//使用递归求Fibonacci数列
int fib_recursion(int n){
	if(n==0 || n==1)
		return 1;
	return fib_recursion(n-1) + fib_recursion(n-2);
}

//使用循环求Fibonacci数列
int fib_loop(int n){
	int fn,fn_1,fn_2,i;
	if(n==0||n==1)
		return 1;
	fn_1=1,fn_2=1;		//f(0),f(1)的初值
	for(i=2;i<=n;i++){
	    fn=fn_1+fn_2;	//计算f(n)
		fn_2=fn_1;		//更新f(n-2)
		fn_1=fn;		//更新f(n-1)
	}
	return fn;
}

int main(){
	int n,fn;
	int start,finish;
	for(n=1;n<=40;n++){
		start=clock();
		fn=fib_recursion(n);
		fn=fib_loop(n);
		finish=clock();
		printf("n=%d, fn=%d, time=%.3f\n",n,fn,(finish-start)*1.0/CLOCKS_PER_SEC);
	}
	
	system("pause");
	return 0;
}
