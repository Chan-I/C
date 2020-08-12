#include<stdio.h>
#include<string.h>
int main(){
	char string1[100];
	gets(string1);
	int i,j,k,l,m,n=1;
	l=strlen(string1);
	for(i=0;string1[i]!='\n'&&i<l;i++){
		if(string1[i]==' '){
			n++;
		}
	}
	char string2[100];
	string2[0]=n+'0';
	m=n;
	i=0;
	for(i=1;i<l+1;i++){
		if(string1[i-1]!=' ')string2[i]=string1[i-1];
		else if(string1[i-1]==' '){
			m--;
			string2[i]=m+'0';
		}
	}
	i=0;
	for(i=1;i<=n;i++){
		for(j=0;j<l;j++){
			if(string2[j]!=i+'0')continue;
			else if(string2[j]=='1'){
				for(k=j+1;k<=l;k++){
					printf("%c",string2[k]);
				}
				break;
			}
			else if(string2[j]==i+'0'&&string2[j]!='1'){
				printf(" ");
				for(k=j+1;k<=l;k++){
					printf("%c",string2[k]);
					if(string2[k+1]>='0'&&string2[k+1]<='9')break;
				}
				break;
			}
		}
		
	}
	
      return 0;	
} 
