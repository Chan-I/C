#include <stdio.h>

int main(){
	int n;
	char ch;
	scanf("%d",&n);
	ch=getchar();
	printf("n=%d, ch=%c, ch(ASCII)=%d\n",n,ch,ch);
	return 0;
}