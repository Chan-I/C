#include<stdio.h>
int main (){
	int a[100][100];
	int i=0,j=0,n;
	scanf("%d",&n);              
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
    printf("%d ",a[0][0]);               //  ����һ��nxn�ľ��󣬰���һ�����ɽ���ɨ�� 
	printf("%d ",a[0][1]);              //   ���ѽ�������  
	i=1; j=0;                               //   ע������Խ��   
	                               //  ע��߽�任��ʽ�� 
	while(i<=(n-1)&&j<=(n-1)){
		if(i==0&&j!=n-1){
			printf("%d ",a[i][j]);
			j++;
		    while(1){
				printf("%d ",a[i][j]);
				i++;
				j--;
				if(j==0)break;
			}
		}
		else if(j==0&&i!=n-1){
			printf("%d ",a[i][j]);
			i++;
			while(1){
				printf("%d ",a[i][j]);
				i--;
				j++;
				if(i==0)break;
			}
		}
		else if(j==0&&i==n-1){
			printf("%d ",a[i][j]);
			j++;
		    while(1){
				printf("%d ",a[i][j]);
				i--;
				j++;
				if(j==n-1)break;
			}
		}
		else if(i==0&&j==n-1){
			printf("%d ",a[i][j]);
			i++;
			while(1){
				printf("%d ",a[i][j]);
				i++;
				j--;
				if(i==n-1)break;	
			}
		}
		else if(i==n-1&&j!=n-2){
			printf("%d ",a[i][j]);
			j++;
		    while(1){
				printf("%d ",a[i][j]);
				i--;
				j++;
				if(j==n-1)break;
				if(i>=n)
				break;
			}
		}
		else if(j==n-1){
			printf("%d ",a[i][j]);
			i++;
			while(1){
				printf("%d ",a[i][j]);
				i++;
				j--;
				if(i==n-1)break;
			}
		}
		else if(i==n-1&&j==n-2){
			printf("%d ",a[i][j]);
			j++;
			printf("%d ",a[i][j]);
			break;
		}
	}
} 
