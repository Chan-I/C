#include<stdio.h>
int gcd(int a,int b){
	int i;
	int min=a<b?a:b;
	for(i=min;i>1;i=i-1){
		if(a%i==0&&b%i==0)
		break;
	}
	return i;
}
int main(){
	int j,m,a,b,c;
	m=1;
	for(j=0;j>m-100;j++){
		scanf("%d %d",&a,&b);
	  if(a!=0&&b!=0){
		c=gcd(a,b);
	    printf("%d\n",c);
      }
      if(a==0&&b==0)
      break;
      if(a==0&&b!=0)
      printf("%d\n",b);
      if(a!=0&&b==0)
      printf("%d\n",a);
	   }	

	
}
