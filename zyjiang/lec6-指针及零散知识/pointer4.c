#include <stdio.h>

int main(){
	int a[10]={0,1,2,3,4,5,6,7,8,9};
	int *p=a;
	int n;

	n=*p++;
	n=*++p;
	++*p;
	return 0;
}