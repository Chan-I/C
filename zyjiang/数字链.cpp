/*�ҳ���������λ����һ�ĸ���*/
#include<stdio.h>
int lianjie(int n){
	int i=0,a[100];
	for(i=0;i<3;i++){
		a[i]=n%10;
		n=n/10;
	}
	return a[0]*a[0]+a[1]*a[1]+a[2]*a[2];
}
int main(){
	int n;
	scanf("%d",&n);
	int i=0;
	int jishu=0;
		while(n>0){
		    n=lianjie(n);
	    	printf("%d",n);
	    	if(n%10==1)jishu++;
	    	if(n<10){
	    	   printf("\n");
			   printf("�������й���%d��ĩβ��1������",jishu);
	    	   return 0;    
	    	}
	    	printf("->");
	     }
}
