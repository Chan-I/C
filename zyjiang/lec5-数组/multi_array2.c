#include <stdio.h>
#include <stdlib.h>

int min_index( int a[], int n ){ //��������Сֵ��������Сֵ��Ӧ��λ��
    int i,index=0; //�����һ��Ԫ������Сֵ
    for(i=1;i<n;i++)
        if(a[i]<a[index]) index=i; //����и�С��Ԫ�������index
		return index;
}

int main(){
    int a[4][3]={{11,13,121},{407,72,88},{23,58,1},{134,30,62} };
    int row,count=0,col,i;
    for(row=0;row<4;row++){
        col=min_index( a[row], 3); //�ҵ�һ����Сֵ���ڵ���
        for(i=0;i<4 && a[i][col]<=a[row][col];i++); //�������Ƿ��и���Ԫ��
        if( i==4 ){ //û�и����Ԫ�أ���һ������
            printf("row=%d,col=%d,value=%d\n",row, col,a[row][col]);
            count++; //�����������
        }
    }
    if(count==0)printf("no\n"); //û������

	//system("pause");
    return 0;
}
