#include<stdio.h>
int main(){
	int m,i=0,j=0,x,n=0;
	int k,l,t1,t2;
	int jishu[100000]={0};
	int oushu[100000]={0};
	scanf("%d",&m);
	for(n=0;n<m;n++){    
		scanf("%d",&x);
		if(x%2==0){
			oushu[i]=x;
			i=i+1;
		 
		}
		else{
			jishu[j]=x;
			j=j+1;
		
		}
	}

	for(k=0;k<i-1;k++){		
		for(l=k+1;l<i;l++){
			if(oushu[k]<oushu[l]){
			   t1=oushu[k];
			   oushu[k]=oushu[l];
			   oushu[l]=t1;
			   }
			   
			   	//printf("%d ",oushu[k]);
			   	
			   
			//if(jishu[k]<jishu[l]){
			  // t1=jishu[l];
			   //jishu[l]=jishu[k];
			   //jishu[k]=t1;
		    //}
		    //while(jishu[k]!=0){
		    //	printf("%d ",jishu[k]);
		   // 	break;
		   // }
	
	    }
    }
    int a=0,b=0;
    for(a=0;a<i;a++){
    	printf("%d ",oushu[a]);
    }
    	
    
		    
	k=0;
	for(k=0;k<j-1;k++){
	    for(l=k+1;l<j;l++){
	    if(jishu[k]<jishu[l]){
			   t2=jishu[k];
			   jishu[k]=jishu[l];
			   jishu[l]=t2;
			   }
			   	
	}	
	}
	    for(b=0;b<j;b++)
		  printf("%d ",jishu[b]);
		  
	   
	
	
	printf("\n");
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}



