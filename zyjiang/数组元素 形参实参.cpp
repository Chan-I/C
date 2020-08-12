/*以数组为参数的函数执行时，对形参数组元素的操作，
     就是直接对函数调用时的实参数组元素的操作*/ 
#include<stdio.h>
void rev(int n,int a[]){
	int x,i,j;
	for(i=0,j=n-1;i<j;++i,--j){
		x=a[i];                         /*  讲数组元素换位置  巧妙的算法！！*/
		a[i]=a[j];
		a[j]=x;
	}
}
int main(){
	int i,b[]={1,2,3,4,5,6,7};
	for(i=0;i<7;i++)
		printf("b[%d]=%d\n",i,b[i]);
	
		rev(7,b);
		
		printf("After reversion:\n");
		for(i=0;i<7;i++)
			printf("b[%d]=%d\n",i,b[i]); 
		
	
	return 0;
}
