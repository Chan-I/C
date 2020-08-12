#include <stdio.h>

int main(){
	FILE *fpr=fopen("input.txt","r");
	FILE *fpw=fopen("output.txt","w");
	char buf[100];

	if(fpr==NULL||fpw==NULL){
		printf("open file error\n");
		return 0;
	}
	while(fgets(buf,100,fpr)!=NULL){
		fputs(buf,fpw);
	}
	fclose(fpr);
	fclose(fpw);
	system("pause");
	return 0;
}
