#include<stdio.h>

int main(){
	int m,n;//  几组数据 ；  数组大小
	int i,j,k;  //  循环 需要的字母
	int x=0;//  计数所用的 变量。 
	int a[10000]={0};
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d",&n);
		for(j=0;j<n;j++){
		    scanf("%d",&a[j]);
		}
		for(k=0;k<=n-3;k++){
			if(a[k+1]-a[k]==a[k+2]-a[k+1])
			continue;
			else
			x=1;
		} 
		if(x==0)
		printf("yes\n");                    
		else
		printf("no\n");
	    
	    x=0;//  更新 判断值·· 
    }
    
    
    
    
    
    
    
    
}
