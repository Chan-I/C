#include<stdio.h>
int tuzifanzhi(int n){
	int w;
	if(n==1||n==0)
	return 1;
    return tuzifanzhi(n-1)+tuzifanzhi(n-2);
	} 

int main(void){
	int n,y;
	scanf("%d",&n);
	y=tuzifanzhi(n);
	printf("%d",y);
	return 0;
}
