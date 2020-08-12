#include<stdio.h>
int main(){
	int p,i;
	p=1;
	i=2;
	do{
		p=p*i;
		i=i+1;
	}while(i<=5);    //在while情况下   do ··· ··· 
	printf("%d",p);
}
