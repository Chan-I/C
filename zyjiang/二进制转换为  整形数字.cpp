//输入 二进制数  转换成  整形数 
#include<stdio.h>
#include<string.h> 
int dou_zhuanhuan(char a[]){
	int i,n=0;
	for(i=0;a[i]=getchar(),a[i]!='\0'&&(a[i]=='1'||a[i]=='0');i++)
	
	/* 注意 在定义函数的时候 可以有输入值 比如 getchar（）  函数  这样
	  在主函数中就不必在引用 输入函数了  更方便  主函数的步骤更少*/
	  
	  
	 //n=(a[i]-'0'+n)*2;
	   n=n*2+(a[i]-'0');   /* 本人算法出现了问题，就是因为不知道二进制 怎么转换了
	                         按照我的方式写的话   那么 结束就扩大二倍了*/
      /*((((((a[0]*2+a[1])*2+a[3])*2+...)+a[n]     */
	 
	 
	 return n;
} 
int main(){
	char a[10000];
	int c;
	
	c=dou_zhuanhuan(a);
	printf("%d",c);
}
