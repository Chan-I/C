#include<stdio.h>

int main(){
	int m,n;//  �������� ��  �����С
	int i,j,k;  //  ѭ�� ��Ҫ����ĸ
	int x=0;//  �������õ� ������ 
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
	    
	    x=0;//  ���� �ж�ֵ���� 
    }
    
    
    
    
    
    
    
    
}
