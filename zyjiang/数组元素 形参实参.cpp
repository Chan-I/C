/*������Ϊ�����ĺ���ִ��ʱ�����β�����Ԫ�صĲ�����
     ����ֱ�ӶԺ�������ʱ��ʵ������Ԫ�صĲ���*/ 
#include<stdio.h>
void rev(int n,int a[]){
	int x,i,j;
	for(i=0,j=n-1;i<j;++i,--j){
		x=a[i];                         /*  ������Ԫ�ػ�λ��  ������㷨����*/
		a[i]=a[j];
		a[j]=x;
	}
}
int main(){
	int i,b[]={1,2,3,4,5,6,7};
	for(i=0;i<7;i++)
		printf("b[%d]=%d\n",i,b[i]);
	
		rev(7,b);
		
		printf("After reversion:\n");
		for(i=0;i<7;i++)
			printf("b[%d]=%d\n",i,b[i]); 
		
	
	return 0;
}
