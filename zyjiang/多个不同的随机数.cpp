#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void get_rand(int *a, int m, int n, int k)//�������a��
{
    int i,j,t;
    srand((int)time(NULL));
    for(i = 0; i < k; )
    {
        t = rand()%(n-m+1)+m;
        for(j = 0; j < i; j ++)
            if(a[j] == t) break;
        if(j == i)//���ظ�
            a[i++] = t;//��¼�������
    }
}
int main(){
     int a[32];
	 get_rand(a,0,100,10);
	 for(int i=0;i<10;i++)
	 printf("%d\n",a[i]) ;
}
