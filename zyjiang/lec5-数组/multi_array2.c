#include <stdio.h>
#include <stdlib.h>

int min_index( int a[], int n ){ //不返回最小值，返回最小值对应的位置
    int i,index=0; //假设第一个元素是最小值
    for(i=1;i<n;i++)
        if(a[i]<a[index]) index=i; //如果有更小的元素则更新index
		return index;
}

int main(){
    int a[4][3]={{11,13,121},{407,72,88},{23,58,1},{134,30,62} };
    int row,count=0,col,i;
    for(row=0;row<4;row++){
        col=min_index( a[row], 3); //找到一行最小值所在的列
        for(i=0;i<4 && a[i][col]<=a[row][col];i++); //检查该列是否有更大元素
        if( i==4 ){ //没有更大的元素，是一个马鞍点
            printf("row=%d,col=%d,value=%d\n",row, col,a[row][col]);
            count++; //马鞍点个数递增
        }
    }
    if(count==0)printf("no\n"); //没有马鞍点

	//system("pause");
    return 0;
}
