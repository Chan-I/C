#include <stdio.h>

int search(int a[],int count,int n){
	int i=0;
	for(i=0;i<count;i++){
		if(a[i]==n)break;
	}
	return i<n?i:-1;
}
 
int main(){
	int a[]={1,2,3,4,5,6,7,8,9,0};
	int n1=5,n2=10;
	int pos1=search(a,10,n1);
	int pos2=search(a,10,n2);
	printf("pos1=%d,pos2=%d\n",pos1,pos2);

	return 0;
}