#include<stdio.h>

#include<string.h>
int main(){
	char line[256];        
	int i;
	for(i=0;i<256&&(line[i]=getchar())!='\n';i++);
	puts(line);
} 



/*   ����Ҫѧϰ�����ķ���  ֱ����forѭ���ڽ������뺯��������    
   ��ע�⵽�� ���з��� ���   ������ ��Ϊ����ʱ�� ���   */
