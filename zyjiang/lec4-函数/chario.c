#include <stdio.h>

int main(){
	while(1){
		char ch=getchar();
		if(ch<'a'||ch>'z')
			break;
		ch='A'+(ch-'a');
		putchar(ch);
	}
	printf("\n");
    system("pause");
	return 0;
}
