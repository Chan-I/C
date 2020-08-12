#include<stdio.h>
#include<string.h>
int main(){
	char a[100];
	char max[100];
	int j;
	int i;
	for(j=0;gets(a)!=NULL;j++){
	 
	 	if(j==0){
			i=strlen(a);  //第一次的长度 
		}
		
		
		if(strlen(a)>i){
			
			i=strlen(a);
			strcpy(max,a);
			
		}
		
		
		
	
	}
	
	
	printf("%d",i);
	printf("\n");
	printf("%s",max);
	
	
	
	
}

