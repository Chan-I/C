#include <stdio.h>

int main(){
	FILE *fpr=fopen("input.txt","r");
	FILE *fpw=fopen("output.txt","w");
	char ch;

	if(fpr==NULL||fpw==NULL){
		printf("open file error\n");
		return 0;
	}
	while((ch=fgetc(fpr))!=EOF){
		fputc(ch,fpw);
	}
	fclose(fpr);
	fclose(fpw);
	system("pause");
	return 0;
}
