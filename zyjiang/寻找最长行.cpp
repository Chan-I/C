#include<stdio.h>
#include<string.h>
int main(){
	char a[100];
	char end[]={"***end***"};
	char max[100]={0};
	int j;
	int i;
	for(j=0;gets(a)!=NULL;j++){
		
		
	 if((strcmp(a,end)==0)&&j==1||(strcmp(a,end)==0)&&j==0)
	   goto x;
	 else if(strcmp(a,end)==0)
	 goto y;
	 	/*  ÅÐ¶Ï½áÊøÓï¾ä ***end***  */
		 
		 
		 if(j==0){
			i=strlen(a);  
		}
		
		
		if(strlen(a)>i){
			
			i=strlen(a);
			strcpy(max,a);
			
		}
		
		
	}
	
	
    y:
		
	printf("%d",i);
	printf("\n");
	printf("%s",max);
	
		
	x:
		return 0;

	
	
	
	
}


