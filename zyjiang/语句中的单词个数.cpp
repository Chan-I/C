#include<stdio.h>
#include<string.h>
int main(){
	char str[81];
	int i;//用于循环
	int sum=0;// 计数！
	int word=0;//  判断是否为单词
	char com;//用于比较
	gets(str);
	for(i=0;(com=str[i])!='\0';i++){
		if(com==' ')
		  word=0;
	 
	  else if(word==0){              /*  注意此处
	                           要用else if    不能用  if！！！
							       当你输入最后有空格时  单词数会增加！*/
	   	word=1;
	   	sum++;
	   }
	}   
	printf("%d",sum);
	    
}
