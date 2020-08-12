#include <stdio.h>
#include <stdlib.h>

int main(){
	int i;
	//定义数组
	int a[5];
	//使用数组元素
	a[4]=0;
	for(i=0;i<4;i++){
		a [i] = i; //第i+1个元素
		a[4] += a[i] ;
		printf("a[%d]=%d\n",i,a[i]);
	}
	printf("a[%d]=%d\n",i,a[i]);
	printf("\n");
	//获得数组首地址的三种方法
	printf("the address of array is %x\n",a);
	printf("the address of array is %x\n",&a);
	printf("the address of array is %x\n",&a[0]);
	printf("\n");
	//数组每个元素的地址与首地址的关系
	for(i=0;i<5;i++){
		printf("the address of a[%d] is %x\n",i,&a[i]);
	}
	system("pause");
	return 0;
}
