#include<stdio.h>
int main(){
  int a,b,c,d,e;
  d=100;
  while(d<=999){
  	a=d%10;
  	b=d%100/10;
  	c=d/100;
  	e=a*a*a+b*b*b+c*c*c;
  	if(e==d){
	  printf("%d\n",e);
  	}
  	d=d+1;
  } 
}

