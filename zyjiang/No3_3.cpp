#include <stdio.h>
#include <stdlib.h>
int main(){
	FILE*fp1;/*�ļ�ָ�루num1��*/
	FILE*fp2;/*�ļ�ָ�루num2��*/
	int i,i1=0,i2=0,j=0,a1[100]={0},a2[100]={0},a3[200]={0},jishu1=0,jishu2=0;
	if((fp1=fopen("num1.txt","r"))==NULL){
		printf("can not open file");
		return 1;
	}/*��num1*/
	else {
		for(i=0;i<9;i++){
			if((fscanf(fp1,"%d",&a1[i]))!=1)
			jishu1++;
		}		
	}/*����num1*/ 
	if((fp2=fopen("num2.txt","r"))==NULL){
    	printf("can not open file");
		return 1;
	}/*��num2*/
	else {
		for(i=0;i<9;i++){
			if((fscanf(fp2,"%d",&a2[i]))!=1)
			jishu2++;
		}		
	}/*����num2*/
	for(i=0;i<9;i++){
	    a3[j]=a1[i];
	     j++;
	}
	for(i=0;i<9;i++){
	    a3[j]=a2[i];
		j++;
	}/*�������ļ��е����ݶ��밡a3������*/
	int t;
	for(i1=0;i1<j-1;i1++){
		for(i2=i1+1;i2<j;i2++){
			if(a3[i1]>a3[i2]){
				t=a3[i1];
				a3[i1]=a3[i2];
				a3[i2]=t;
			}
		}
	}/*����*/
   FILE*fp3=fopen("num3.txt","w");
  if(fp3!=NULL){
  	for(i=0;i<17;i++){
  		fprintf(fp3,"%d ",a3[i]);
  	}
  	fprintf(fp3,"%d",a3[17]);
  	fclose(fp3);
  }/*д��num3*/ 
return 0;
}
