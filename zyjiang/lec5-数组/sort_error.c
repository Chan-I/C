#include <stdio.h>
#include <stdlib.h>

int main(){
	int a[10]={20,15,18,9,11};
	int n=5;
	int i,j;
	
	//����
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(a[i]<a[j+1])
			{
				int t=a[i];
				a[i]=a[j+1];
				a[j+1]=t;
			}
			
		}
		}
	//������
	
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
	
	system("pause");
	return 0;
}