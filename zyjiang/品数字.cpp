#include<stdio.h>
int prime(int a){
	int i;
	if(a==1)return a;
	for(i=a/2;i>1;i--){
		if(a%i==0)break;
	}
	if(i==1)return a;
	else return i;
}
int main(){
	char b[100];
	int i,j,k,x=0,c=0;
	for(i=0;i<100;i++){
		k=0;
		x=0;
		c=0;
		for(j=0;j<100;j++){
			b[j]=getchar();
			if(b[j]=='\n')break;
		    else if(b[j]>='0'&&b[j]<='9'){
		    	k=1;
		    	x=x*10+b[j]-'0';
		    }
		    else c=1;
		}
		if(k)printf("%d\n",prime(x));
		else if(c) printf("0\n");
		if(b[0]=='\n')break;
	}
}

