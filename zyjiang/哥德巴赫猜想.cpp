#include<stdio.h>
int isprime(long n){
	long i,isprime=1;
	for(i=2;i<n;i++){
		if(n%i==0){
		                        // 定义一个函数  ： 判断是否为 质数 
		isprime=0;
		break;
	    }
	}
	return i==n;
}
int main(){
	int m,i,s,a; 
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d",&s);
		for(a=2;a<s;a=a+1){
			if(isprime(a)==1&&isprime(s-a)==1)
			break;
		 
		   
	      } 
	    printf("%d %d\n",a,s-a);
	}
	

	   
	
}
