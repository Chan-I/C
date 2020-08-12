#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
//正确的input函数

int *input( int n){
	int *p=NULL,i;
	p=(int *)malloc(sizeof(int) * n);
	if(p!=NULL){
		for(i=0;i<n;i++){
			scanf("%d",p+i);
		}
	}
	return p;
}

//错误的input函数

int *input(int n){
	int a[10]={0},i;
	
	for(i=0;i<n;i++){
		scanf("%d",a+i);
	}
	
	return a;
}
*/
int main(){
	int *data,a[10];
	int n,i;
	scanf("%d",&n);
	data=input(n);
	printf("alloc address is %x\n",data);
	if(data!=NULL){
		memset(a,0,sizeof(int)*10);
		memcpy(a,data,n*sizeof(int));
		for(i=0;i<n;i++){
			printf("a[%d]=%d\n",i,a[i]);
		}
		/*
		free(data);
		
		printf("after free address is %x\n",data);
		for(i=0;i<n;i++){
			printf("data[%d]=%d\n",i,data[i]);
		}
		*/
	}
	return 0;
}