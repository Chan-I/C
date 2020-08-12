#include<stdio.h>//  位数和无限次相加  直到加至一位数为止！  
int weishu(int p){
	int i=0,j=0;
	int count=1;
	j=p;
	if(p<10)return 1;
	while(j>=10){
		j=j/10;
		count++;
		
	    if(j<10)
		break;
		
	}
return count;
		
	
}
int main(){
	int m,a,x,y=0,k,b,n;
	int c;
	
	
	while(1){
		scanf("%d",&x);
		if(x==0)break;
		k=x;
		
		while(1){
			for(y=0;x<=k&&x>0;){
	    
		    b=x%10;
		    x=x/10;
		    y=y+b;
			
	        }
	       n=weishu(y);
	       if(n==1)break;
	      else if(n>1){
	    	x=y;
	      }
		}
		
	    
	     
	     
	
	
	
		printf("%d\n",y);
	}
} 
