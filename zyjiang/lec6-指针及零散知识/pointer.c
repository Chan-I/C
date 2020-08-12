#include <stdio.h>

int main(){
	int *p, *q,  n=10, m, a[10];

	p=&n;
	q=p;
	
	m=*p+*q*n;
	printf("m=%d\n",m);
	++*p;
	printf("n=%d,*p=%d,*q=%d\n",n,*p,*q);
	(*p)++;
	printf("n=%d,*p=%d,*q=%d\n",n,*p,*q);
	*p+=*q+n;
	printf("n=%d,*p=%d,*q=%d\n",n,*p,*q);
	q=&a[0];
	*q=*p/12;
	printf("n=%d,*p=%d,*q=%d\n",n,*p,*q);
    system("pause");
	return 0;
}
