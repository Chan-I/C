#include <stdio.h>

int main(){
	int a[100];//������������
	int n,i;
	//��������
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	//ѡ������
	for(i=0;i<n-1;i++){
		int j,k;
		for(k=i,j=i+1;j<n;j++){
			if(a[j]<a[k])k=j;
		}
		if(k!=i){
			int t;
			t=a[i];
			a[i]=a[k];
			a[k]=t;
		}
    }
    //��ӡ��������� 
    for(i=0;i<n;i++)
      printf("%d ",a[i]); 
      
    printf("\n");
	//������λ��
	if(n%2)
		printf("middle  %d\n",a[n/2]);
	else
		printf("middle %d\n",(a[n/2]+a[n/2-1])/2);
		system("pause");
	return 0;
}
