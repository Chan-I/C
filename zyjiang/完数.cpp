#include<stdio.h>
int main(){
	int i,a,b,x,sum;
	scanf("%d %d",&a,&b);
	for(x=a;x<b&&x>=a;x++){
		for(i=1,sum=0;i<=x/2;i++){
			if(x%i==0)sum=sum+i;
		}
			if(sum==x)
		printf("%d\n",sum);
		}
		
	}

