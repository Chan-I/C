#include <stdio.h>

void division(int dividend, 
				   int divisor, 
				   int *quotientp, 
				   int *remainderp){
	*quotientp = dividend / divisor;
	*remainderp = dividend % divisor;
}
	
int main(){
	int quot, rem;
	//printf("%d\n",*p);
	division(40, 3, &quot, &rem);
	printf("40 divided by 3 yields quotient %d ", quot);
	printf("and remainder %d\n", rem);
	return 0;
}


