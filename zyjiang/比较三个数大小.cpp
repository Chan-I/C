#include<stdio.h>
int main(){
	int max(int x,int y,int z);
	int a,b,c,d,e;
	scanf("%d,%d,%d",&a,&b,&c);
	d=max(a,b,c);
	printf("max=%d\n",d);
}
int max(int x,int y,int z){
	int k,n;
	if (x>y)n=x;
	else n=y;
	if (n>z)k=n;
	else k=z;
	return (k);
}
