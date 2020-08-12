#include <stdio.h>

int main(){
	FILE *fp;
	int n=123456;

	fp=fopen("out.txt","w");
	fprintf(fp,"%d",n);
	fclose(fp);

	fp=fopen("out.dat","wb");
	fwrite(&n,sizeof(int),1,fp);
	fclose(fp);
    system("pause");
	return 0;
}
