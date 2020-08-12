#include <stdio.h>
#include <stdlib.h>

int move_count=0;//统计移动次数

//移动一个圆盘的函数，
//调用此函数时from塔座上只有一个圆盘，目标塔座为空，可以直接移动

void move_plate(int plate,	//圆盘编号
				char from,	//起始塔座，
				char to)	//目标塔座
{
	printf("step %d: move plate %d from %c to %c\n",move_count+1,plate, from, to);
	move_count++;
}

//移动汉诺塔的递归函数
void hanoi(int n,		//圆盘个数
		   char from,	//起始塔座，用一个字符表示
		   char tmp,	//中转塔座，用一个字符表示
		   char to)		//目标塔座，用一个字符表示
{
	if(n==1){//递归结束条件
		move_plate(1,from, to);//只有一个圆盘时可以直接从from移动到to
	}
	else{
		hanoi(n-1,from, to, tmp);//先将上面n-1个圆盘从from塔座移动到tmp塔座
		move_plate(n, from, to);//然后将第n个圆盘从from塔座移动到to塔座
		hanoi(n-1,tmp, from, to);//最后将tmp塔座上的n-1个圆盘移动到to塔座
	}
}
//主函数
int main(){
	hanoi(20,'X','Y','Z');
	printf("move_count=%d\n",move_count);
	//system("pause");
	return 0;
}
