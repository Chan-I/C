#include<stdio.h>
double fun(int n){
	return n==1?1:1/(1+fun(n-1));
	
}
int main(){
	int i,m,n;
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&m);
		
		printf("%.6f\n",fun(m));
		
	}
}
