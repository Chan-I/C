#include <stdio.h>
#include <stdlib.h>

int main(){
	float score[100],t;
	int i,j,k,n,count=0;
	//输入数据
	scanf("%d",&n);//人数
	for(i=0;i<n;i++){
		scanf("%f",&score[i]);//依次输入成绩
		if(score[i]<60)count++;
	}
	//排序
	for(i=0;i<n-1;i++){
		for(k=i+1,j=i;k<n;k++) //找n-i+1个元素中的最小值
			if(score[k]<score[j])j=k;
		if(j!=i){ //如果最小值不是第i个元素则将score[i]和score[j]交换
			t=score[i];score[i]=score[j];score[j]=t;
		}
	}
	//输出结果
	printf("%d students <60\n%d students >=60\n",count,n-count);
	for(i=0;i<n;i++){
		printf("%f\n",score[i]);
	}
	
	system("pause");
	return 0;
}