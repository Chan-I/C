#include<stdio.h>
#include<string.h> 
int main(){
	char str[81];
	//scanf("%s",str);
	gets(str); 
	printf("%s",str);
}
/*系统会自动把空格字符作为  字符串之间的空格符
，所以 只将  第一个空格前的字符输出   注意只会出现在scanf中！
  gets中不会出现   ！！*/
