#include <stdio.h>
int main()
{
   int a[20][20],b[42];
   int m,i,n,j,p,g,e,f,t,q;
   scanf("%d",&m);
   for(i=0;i<m;i++)
   {
       for(j=0;j<m;j++)
	   {
		   scanf("%d",&n);
		   a[i][j]=n;
	   }

   }
   
       for(p=0;p<m;p++)
	   {
		   b[p]=0;
		
	      for(g=0;g<m;g++)
		  {
		      b[p]+=a[p][g];
		  }
		
		} 
        for(e=0;e<m;e++)
		{
		   b[e+m]=0;
		
	      for(f=0;f<m;f++)
		  {
		      b[e+m]+=a[f][e];
		  }
		
		} 
		//错误：计算主对角线上元素之和时，b[m+m]没有清0
		for(t=0;t<m;t++){
			b[m+m]+=a[t][t];
		}
		for(q=0;q<m;q++){
			b[m+m+1]+=a[m-1-q][q];
		}
		//错误：计算辅对角线上元素之和时，b[m+m+1]没有清0
        int M,N,T,H,max=0;
		for(M=0;M<m+m+2;M++)
		{
			for(H=M;H<m+m+2;H++)
			{
			    if(b[M]<b[H+1])
				{
					T=b[M];
					b[M]=b[H+1];
					b[H+1]=T;
				}
					
			}
		}
		for(N=0;N<m+m+2;N++)
			printf("%d ",b[N]);
		    printf("\n");
				
		return 0;	
		


	   

}

