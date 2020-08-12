#include<stdio.h>
int main(){
	int n,x,sum,y,i;
	scanf("%d",&n);
	sum=0;
	for(i=0;i<=n;i++){
		scanf("%d",&x);
		sum=sum+x;
	}
	y=sum/n;
	printf("%d",y);
	return 0;
}
