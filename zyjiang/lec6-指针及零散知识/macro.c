#include <stdio.h>

#define  PI 3.1415\
926
#define HELLO "hello \
  world!\n"
#define A 3+5
#define MUL(X,Y) X*Y
#define max(a,b) (a)>(b)?(a):(b)


int main(){
	int a2=0;
	double s=PI*5*5;
	printf("%s",HELLO);
	printf("A=%d\n",A);
	printf("A*2=%d\n",A*2);
	printf("%d\n",MUL(5,3));
	printf("%d\n",MUL(5,3+2));
	printf("%d\n",max(max(6,5),7));
	return 0;
}