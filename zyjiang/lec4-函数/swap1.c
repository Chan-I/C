#include <stdio.h>

int a=5, b=3;//全局变量a,b

void swap( ){
	int t;
	
	t = a;  a = b;  b = t;
}

int main(){
	printf( "before swap:  a= %d; b= %d\n", a, b );
	swap();
	printf( "after swap:  a= %d; b=%d\n", a, b );
	//system('pause');
	return 0;
}
