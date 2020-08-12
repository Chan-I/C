
//将字符串转换成整数！ 

#include <stdio.h>


int string2int(char s[]){
    int n=0,i;
    for( i=0; s[i]!=0; i++ ){ 
	n=n*10+(s[i]-'0');
    }
    printf("n=%d\n",n);
    return n;
}
int main(){
    int n=string2int("12345");
    printf("%d\n",n);
	return 0;
}
