#include <stdio.h>
#include <stdlib.h>

int main(){
	int img[256][256],a[256]={0};
	int m,n,k,i,j;
	
	
	scanf("%d %d %d",&m,&n,&k);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&img[i][j]);
			a[img[i][j]]++;
		}
	}
	for(i=0;i<k;i++)
		printf("%d %d\n",i,a[i]);
    system("pause");
	return 0;
}
