#include <stdio.h>
#include <stdlib.h>

int main(){
	int i;
	//��������
	int a[5];
	//ʹ������Ԫ��
	a[4]=0;
	for(i=0;i<4;i++){
		a [i] = i; //��i+1��Ԫ��
		a[4] += a[i] ;
		printf("a[%d]=%d\n",i,a[i]);
	}
	printf("a[%d]=%d\n",i,a[i]);
	printf("\n");
	//��������׵�ַ�����ַ���
	printf("the address of array is %x\n",a);
	printf("the address of array is %x\n",&a);
	printf("the address of array is %x\n",&a[0]);
	printf("\n");
	//����ÿ��Ԫ�صĵ�ַ���׵�ַ�Ĺ�ϵ
	for(i=0;i<5;i++){
		printf("the address of a[%d] is %x\n",i,&a[i]);
	}
	system("pause");
	return 0;
}
