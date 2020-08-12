#include<stdio.h>
int main(){
	int sum,i;
	sum=1;
	i=1;
while(i<=5){

   sum=sum*i;
   i=i+1;
}
printf("sum=%d",sum);
	return 0;
} 
