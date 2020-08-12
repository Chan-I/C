#include<stdio.h>
#include<stdlib.h>
 
#define NAME_LENGTH 100
#define BUFFER_SIZE 1<<20
 
char buffer[BUFFER_SIZE];
 
int main() {
	char name[NAME_LENGTH];
	int sz=0;
	int k = 0;
	printf("Please input the name of the target file.\n");
	scanf("%s",name);
	
	printf("Please input the size(MB) of the target file.\n");
	scanf("%d",&sz);
	
	for(k = 0 ; k< BUFFER_SIZE; k++)
		buffer[k]='1'; 
	FILE *fout=fopen(name,"wb");
	if(fout==NULL) {
		printf("Cannot create the file.");
		exit(-1);
	}
	
	printf("Wait...\n");
	for(int i=0; i<sz; i++) {
		fwrite(buffer,BUFFER_SIZE,1,fout);
	}
	printf("Finish.\n");
	
	fclose(fout);
	return 0;
}
