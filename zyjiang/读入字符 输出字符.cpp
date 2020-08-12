#include<stdio.h>

#include<string.h>
int main(){
	char line[256];        
	int i;
	for(i=0;i<256&&(line[i]=getchar())!='\n';i++);
	puts(line);
} 



/*   我们要学习上述的方法  直接在for循环内进行输入函数的引用    
   还注意到了 换行符的 情况   避免了 人为输入时的 误差   */
