#include <stdio.h>

int main(){
	FILE * fp=fopen("test.txt","r");
	int n;

	if(fp==NULL)
	{
		printf("open file error\n");
		return 0;
	}
	while(fscanf(fp,"%d",&n)!=EOF)
	{
		printf("%d ",n);
	}
	printf("\n");
	fclose(fp);
	system("pause");
	return 0;
}
