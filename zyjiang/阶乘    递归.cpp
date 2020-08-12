#include<stdio.h>
int JC(int n){
	return n==1?1:n*JC(n-1);   //注意此处的格式 三元运算符   注意返回值！ 
} 
int main(void){
	int x,y;
	scanf("%d",&x);
	
	y=JC(x);
	printf("%d",y);
	return 0;
}
