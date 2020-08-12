#include<stdio.h>
int main(){
	int m,n=20;
	int i,j,k=0;
	int sum[2*20+2]={0};
	int data[n][n];
	scanf("%d",&m);
	for(i=0;i<m;i++,k++){
		for(j=0;j<m;j++){
			scanf("%d",&data[i][j]);
			sum[k]=sum[k]+data[i][j];
		}
	}
	for(j=0;j<m;j++,k++){
		for(i=0;i<m;i++){
			sum[k]=sum[k]+data[i][j];
		}
	}
	for(i=0;i<m;i++){
		sum[k]=sum[k]+data[i][i];
		sum[k+1]=sum[k+1]+data[i][m-1-i];
		}
			
		
     
       int l=0,t;
	for(i=0;i<(m*2+2);i++){
		for(l=0;l<(m*2+2);l++){
			if(sum[i]>sum[l]){
			t=sum[l];
			sum[l]=sum[i];
			sum[i]=t;	
			}
		}
	}
     for(l=0;l<(2*m+2);l++){
     	printf("%d ",sum[l]);
     }
        printf("\n");
	return 0;
}


