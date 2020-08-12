#include<stdio.h>

int main(){
	int ele1,ele2,ele3;
	scanf("%d,%d,%d",&ele1,&ele2,&ele3);
	double price1=0.5,price2=0.55,price3=0.7;
	double fee1,fee2,fee3;
	if(ele1<=110,ele2<=110,ele3<=110){
		fee1=ele1*price1;
		fee2=ele2*price1;
		fee3=ele3*price1;
	}
	else if(ele1>110&&ele1<=210,ele2>110&&ele2<=210,ele3>110&&ele3<=210){
		fee1=110*price1+(ele1-110)*price2;
		fee2=110*price1+(ele2-110)*price2;
		fee3=110*price1+(ele3-110)*price2;
		
	}
	else{
		fee1=110*price1+(210-110)*price2+(ele1-210)*price3;
		fee2=110*price1+(210-110)*price2+(ele2-210)*price3;
		fee3=110*price1+(210-110)*price2+(ele3-210)*price3;
	}
	printf("ele1=%d,fee2=%f\nele2=%d,fee2=%f\nele3=%d,fee3=%f",ele1,fee1,ele2,fee2,ele3,fee3);
	return 0;
}
