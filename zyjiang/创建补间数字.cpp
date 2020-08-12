#include<stdio.h>
int main(){
	int m,n,k;
	int i,z;
	scanf("%d,%d,%d",&m,&n,&k);
	z=(n-m)/k;
	for(i=0;i<=z;i=i+1){
		printf("%d\n",m);
		m=m+k;
	}
	return 0;
} 

