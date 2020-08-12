#include <stdio.h>
#include <STRING.H>

int huiwen(char s[]){
	int i=0,j=strlen(s)-1;
	while(i<j&&s[i++]==s[j--]);

	if(s[i]!=s[j]){
		i--;j++;
		
	} 
   return i>=j;
}
int main(){
	//char s[]="abcba";
	//char s[]="abba";
	//char s[]="abcde";
	char s[]="abcdba";

	if(huiwen(s))
		printf("%s is huiwen\n",s);
	else
		printf("%s is not huiwen\n",s);
	
	return 0;
}
