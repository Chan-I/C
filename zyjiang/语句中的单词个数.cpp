#include<stdio.h>
#include<string.h>
int main(){
	char str[81];
	int i;//����ѭ��
	int sum=0;// ������
	int word=0;//  �ж��Ƿ�Ϊ����
	char com;//���ڱȽ�
	gets(str);
	for(i=0;(com=str[i])!='\0';i++){
		if(com==' ')
		  word=0;
	 
	  else if(word==0){              /*  ע��˴�
	                           Ҫ��else if    ������  if������
							       ������������пո�ʱ  �����������ӣ�*/
	   	word=1;
	   	sum++;
	   }
	}   
	printf("%d",sum);
	    
}
