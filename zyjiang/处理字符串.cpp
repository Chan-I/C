#include<stdio.h>
#include<string.h>
int main(){
	char a[200];
	char b[200];
	int i;
	for(i=0;(a[i]=getchar())!='\n';i++);
	char c=a[0];
	int j;
	int k=0;//b??? 
	for(j=1;j<i;j++){
		if(a[j]>c){
			b[k]=a[j];
			k++;
		}
	}
	b[k]=c;
	k++;
	int q,w,min,t;
	for(q=1;q<i-1;q++){
		for(w=q+1,min=q;w<i;w++){
			if(a[w]<a[min])min=w;
		}
		if(min!=q){
			t=a[min];
			a[min]=a[q];
			a[q]=t;
		}
	}
/*	printf("%s",a);*/	
    for(j=1;j<i;j++){
		if(a[j]<=c){
			b[k]=a[j];
			k++;
		}
	}
	for(i=0;i<k;i++){
		printf("%c",b[i]);
	}
//	printf("%s",b);
}

