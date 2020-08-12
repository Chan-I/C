#include<stdio.h>
int main(){
	int a,b,m;   //此处不能用double！！！ 
     int i;
	scanf("%d,%d",&a,&b);
	m=b-a;
	for(i=0;i<=m;i=i+1){
		printf("%d\n",a);
		a=a+1;
		}

}
