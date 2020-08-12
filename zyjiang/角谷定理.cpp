#include<stdio.h>
int main(){
	int m,i,n,b;
	b=1;
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d",&n);
		while(n!=1){
			if(n%2==0)
			n=n/2;
			else
			n=3*n+1;
			
			b=b+1;
		}
		printf("%d\n",b);
		b=1;
	}
}
