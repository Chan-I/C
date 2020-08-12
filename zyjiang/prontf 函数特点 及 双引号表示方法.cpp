#include<stdio.h>
int main(){
	printf("kjdfkljdfhg\n" "etrehtg\"jrhegiughi\"kjhijh\n" "ukghfkjrehg");
	/* 经过本人的发现 ，就是在printf函数中 哪怕你分开了输出字符，那也只是你以为
	因为没有涉及到换行  这就是 printf函数的特点   多个字符语句同时输出时  不会自动换行
	除非你人为加入换行符号  */
	/* 还要注意一点 就是在双引号内 的 文字 会输出  若果你想让计算机输出双引号 那你就
	这么表示      \"  此处为你想要输入的文字 / 字符  \"     
	                             |  |
								 |等|
								 |价|
								 |于|
								 |  |    
					“此处为你想要输入的文字/字符    "
				               */
} 
