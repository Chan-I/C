#include<stdio.h>

int main(){
	int c[100][100];
	int m,n;
	int q,w,i,j,x=0;
	int min,h,l;
	scanf("%d%d",&m,&n);
	for(q=0;q<m;q++){
		for(w=0;w<n;w++){
			scanf("%d",&c[q][w]);
		}
	}
	/*ÊäÈë¾ØÕóÊý×Ö*/
	for(q=0;q<m;q++){
		min=c[q][0];
		h=q;
		l=0;
		for(w=0;w<n;w++){
			if(min>c[q][w]){
			    min=c[q][w];
			    h=q;
			    l=w;
			}
		}
		j=0;
		for(i=0;i<n;i++){
			if(c[i][l]<=c[h][l])j++;
		}
		if(j==n){
			printf("%d %d %d\n",h,l,min);
			x=1;
		}	
	}
if(x==0)printf("no\n");
}

