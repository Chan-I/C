#include<stdio.h>
int JC(int n){
	return n==1?1:n*JC(n-1);   //ע��˴��ĸ�ʽ ��Ԫ�����   ע�ⷵ��ֵ�� 
} 
int main(void){
	int x,y;
	scanf("%d",&x);
	
	y=JC(x);
	printf("%d",y);
	return 0;
}
