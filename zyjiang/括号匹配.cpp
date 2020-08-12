#include<stdio.h>
int main(){
	char a1[1000];
	char a2[1000];
	int i=0,j=0,k=0;
	
	
	for(;i<1000;i++){
		scanf("%c",&a1[i]);
		if(a1[i]=='\n')break;
	}
	/*输入括号完毕，且i表示个数*/
	
	for(;k<i;k++){		
	    if(a1[k]=='('||a1[k]==')'||a1[k]=='{'||a1[k]=='}'){
			a2[j]=a1[k];j++;
		}
		if(a2[j-1]==')'){
			if(a2[j-2]!='(')printf("no\n");
			else j=j-2;
		}
		if(a2[j-1]=='}'){
			if(a2[j-2]!='{')printf("no\n");
			else j=j-2;
		}
	}
	if(j==0)printf("yes\n");
		
	
}
