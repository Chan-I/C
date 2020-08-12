#include<stdio.h>
double ILY(double x){
	int i;
	for(i=0;i<10;i++){
		x=1+(1/x);
	}
	return x;
}
int main(){
    int j;
     double a,b;
	for(a=1.0;a<20.0;a++){
		b=ILY(a);
		printf("%f\n",b);
	}
  
}
 
