#include <stdio.h>

int main(){
	char s[100];
	int i,n=0;
	FILE *fp;

	while((s[n]=getchar())!='\n'){
		s[n]=s[n]-'a'+'A';
		putchar(s[n]);
		n++;
	}
	printf("\n");
	fp=fopen("c:\\chars.txt","w");
	for(i=0;i<n;i++){
		fprintf(fp,"%c",s[i]);
		fflush(fp);//Ç¿ÖÆÐ´Èë
	}
	fputs("hello",fp);
	fclose(fp);
	return 0;
}