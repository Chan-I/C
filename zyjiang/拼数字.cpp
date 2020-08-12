#include<stdio.h>
#include<string.h>
int yinzi(int x){

	int q;
	if(x==1)return x;
	for(q=x/2;q>1;q--){
		if(x%q==0)
		break; 
	}
	if(q==1)return x;
	else return q;
}




int main(){
	int i=0,j=0,k=0,l=0,n=0,m,p=0;
	char a[81];	
	char c;
	char b[81];
	
	for(i=0;i<81;i++) {
		
		p=0;
		m=0;
		n=0;
		i=0;
		j=0;
		k=0;
		l=0;   
		for(j=0;j<81;j++){
			b[j]=getchar();
			if(b[j]=='\n')break;
		    else if(b[j]>='0'&&b[j]<='9'){
			    n=n*10+(b[j]-'0');
				l=1;
			}
		    else p=1;
		}                 
		 if(l){
		  	m=yinzi(n);
		    printf("%d\n",m);
		  }
		  else if(p)
		  	printf("0\n");
		  if(b[0]=='\n')break;
	}
}

