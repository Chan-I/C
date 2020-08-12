#include <stdio.h>
#include <stdlib.h>

int fac(int n){
	if(n==0)
		return 1;
	return n*fac(n-1);
}
int main(){
	printf("3!=%d\n",fac(3));
	system("pause");
	return 0;
}