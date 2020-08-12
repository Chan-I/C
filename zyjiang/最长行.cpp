#include<stdio.h>
#include<string.h>
int main(){
	char string[200];
	char maxstring[200];
	int x=0,i;
	for(x=0;gets(string)!=NULL;x++){    /*数组已经自动清除··*/
		if(x==0){
			i=strlen(string);
		}
		if(strlen(string)>i){
			i=strlen(string);
			strcpy(maxstring,string);
		}
	}
	printf("%d\n%s",i,maxstring);
}

