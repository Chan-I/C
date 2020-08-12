#include <stdio.h>

void inc(){
	static int count;
	count++;
	printf("count=%d\n",count);
}

int main(){
	int i;
	
	for(i=0;i<10;i++){
		inc();
	}
	return 0;
}