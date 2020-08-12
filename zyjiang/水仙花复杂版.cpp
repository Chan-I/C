//输出 两个数字 之间的 水仙花数！！ 
#include<stdio.h>
#include<math.h>
int fun(int a,int b){
	int x,k;
	k=0;
	double i,j,v;
	for(;a<=b;a++){
		x=a;
		j=0.0;
		while(x<=a&&x>0){
			x=x/10;
			j=j+1;
		}
		x=a;
		v=0.0;
		i=0.0;
		while(x<=a&&x>0){
			i=x%10;
			x=x/10;
			v=v+pow(i,j);
		}
		if(v==a)
		k=k+1;
	}
	return k;
}
int main(){
	int l,a,b,m,c;
	scanf("%d",&m);
	for(l=0;l<m;l++){
		scanf("%d %d",&a,&b);
		if(b<a){
		
		  c=a;
		  a=b;
		  b=c;
	}
	if(a<=100)
	a=100;
		printf("%d\n",fun(a,b));
	}
}
