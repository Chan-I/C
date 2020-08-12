#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){   
	FILE*fp;
	int m=0;
	int i=0; 
	int i1; 
	int j=0;
	int i2; 
	int i3;
	int i4;
    int fuhe=0;
	int k=0;
	char ch;
	char wenben[100];int len1;char chazhao[100];int len2,len3;int weizhi[100];char tihuan[100];char zuihou[1000];
	if((fp=fopen("No2_1(2)before.txt","r"))==NULL){
		printf("can not open file\n");
		return 0;
	}
	while(ch!=EOF){
		ch=fgetc(fp);
		wenben[m]=ch;
		m++;
	}
	printf("请输入要查找的内容：\n");
    gets(chazhao);
    printf("请输入要替换的内容：\n");
	gets(tihuan);
    len1=strlen(wenben);len2=strlen(chazhao);  len3=strlen(tihuan);
    for(i=0;i<len1;){
	    for(i1=i,j=0;j<len2&&i1<len1;j++,i1++){
	    	if(wenben[i1]==chazhao[j])fuhe++;
	    }
	    if(fuhe!=len2){
	   	  i2=i;
	   	zuihou[k]=wenben[i2];
	   	  i++;
	   	  k++;
	   	}
	   else if(fuhe==len2&&len3==len2){
	   	    for(i2=0;i2<len3;k++,i2++){
	   	   	  zuihou[k]=tihuan[i2];
	   	   }
	   	   i=i+len2;
	   }
	   else if(fuhe==len2&&len3>len2){
	   	   for(i3=0;i3<len3;k++,i3++){
	   	   	  zuihou[k]=tihuan[i3];
	   	   }
	   	i=i+len2;
	   }
	   else if(fuhe==len2&&len3<len2){
	   	   for(i4=0;i4<len3;i4++,k++){
	   	   	  zuihou[k]=tihuan[i4];
	   	   }
	   	   i=i+len2;
	   }
	    fuhe=0;
	}
	FILE *fp1=fopen("No2_1(2)after.txt","w");
	if(fp1!=NULL){
		for(i=0;i<k;i++){
   	     fprintf(fp1,"%c",zuihou[i]);
       }   
       fclose(fp1);
	}
    return 0;
}

