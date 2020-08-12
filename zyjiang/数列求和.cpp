#include<stdio.h>
double fenmu(int m){
	if(m==0)return 1.0;
	else if(m==1)return 2.0;
	else if(m>=2)
	return fenmu(m-1)+fenmu(m-2);
}
double fenzi(int n){
	if(n==0)return 2.0;
	else if(n==1)return 3.0;
	else if(n>=2)
	return fenzi(n-1)+fenzi(n-2);
}
int main(){
	double s1,s2;
	int i;
	double s=0.0;
	for(i=0;i<20;i++){
		s2=fenmu(i);
		s1=fenzi(i);
		s=s+s1/s2;
	}
	printf("%.2f\n",s);
}
