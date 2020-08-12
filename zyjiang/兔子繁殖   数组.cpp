#include<stdio.h>
int main(){
	int fi[40]={1,1};
	int i;
	for(i=2;i<=40;i++){
		fi[i]=fi[i-1]+fi[i-2];
		printf("%d\n",fi[i]);
	}
	return 0;
}
