#include<stdio.h>
int main(){
	int m,i,t,j=0,a[6]={2,6,5,9,4,3};
	for(i=0;i<5;i++){                   //冒泡排序最外层循环是把最大数 依次滚动到最边上    
		for(j=0;j<5;j++){      //  第二重循环：每两个数 进行比较！  
		                                                  
		if(a[j]>a[j+1]){                                           
			t=a[j];                                               
			a[j]=a[j+1];                                         
			a[j+1]=t;                                              
			}
			
	}
			
			
	
}
	for(j=0;j<6;j++){
		printf("%d  ",a[j]);
	}
} 
