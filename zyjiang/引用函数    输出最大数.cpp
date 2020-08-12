#include<stdio.h>
double x,y,z;
double tmax(double x,double y,double z);
double tmax(double x,double y,double z){
	double k,n;
	if(x>y)n=x;
	else n=y;
	if(n>z)k=n;
	else k=z;
	printf("%d",k);
} 
int main(){
	double a,b,c;
	double d;
	
scanf("%d,%d,%d",&a,&b,&c);
d=tmax(a,b,c);








}
