#include <stdio.h>

int he(int q){
	int sum=0,w;
	while(q!=0){
    w=q%10;
	q=q/10;
	sum+=w;
	}
    return sum;
}
int hui(int n){
    int r=0,i;	
	int t[100];
	//错误：没有考虑n为0的情况
	for(i=0;n!=0;i++,r++){
		
    t[i]=n%10;
	n=n/10;
		}
	
	int z=0;
    for(i=0;i<(r+1)/2;i++){
		
	if(t[i]==t[r-1-i])
		 z=1 ;		
	else 
	{z=2 ;
	   break;
	   }
	}
	if(z==1)
		return 1;
	else 
		return 0;
   	
}

int main (){
        int a,i,b;
		
		scanf("%d",&a);

		for(i=0;i<a;i++){

          scanf("%d",&b);

		  if (hui(b)==1){ 
              
			 printf("%d\n",he(b));
		  
		  
		}
		  else 
			  printf("no\n");
			  
		}
		return 0;
}

