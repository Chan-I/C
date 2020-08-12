#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int str2int(char s[]){
    int n=0;
    int i;
    for( i=0; s[i]!=0; i++ ){ 
		n=n*10+(s[i]-'0');
    }
    return n;
}

int main(){
	char s[]="13056";
	int n=str2int(s);
	printf("n=%d\n",n);

	
	n=strcmp("language","LANGUAGE");
	printf("hello");
	printf("world\n");
	puts("hello");
	puts("world");
	system("pause");
	return 0;
}