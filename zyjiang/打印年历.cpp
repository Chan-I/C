/*?????????*/
#include<stdio.h>
int year(int n){
	int i,j=0;
	if(n>2015){
		for(i=2015;i<n;i++){
			if(i%400==0)j++;
			else if(i%4==0)if(i%100!=0)j++;
		}
		return 365*(n-2015)+j;
	}
	else if(n<2015){
		for(i=n;i<2016;i++){
			if(i%400==0)j++;
			else if(i%4==0)if(i%100!=0)j++;
		}
		return 365*(2015-n)+j;
	}
	else if(n==2015)return (2015-n)*365;
} 
int r_year(int m){
	int k,j=0;
	if(m>2015){
		for(k=m;k>2015;k--){
			if(k%400==0)return 1;
			else if(k%4==0)if(k%100!=0)return 1;
			else return 0;
		}
	}
	else if(m<2015||m==2015){
		for(k=m;k<2016;k++){
			if(k%400==0)return 1;
			else if(k%4==0)if(k%100!=0)return 1;
			else return 0;
		}
	}
} 
int main(){
	int year1;
	printf("Ç×£¬ÄãÒª´òÓ¡ÄÄÒ»ÄêÑ½~~~~\n"); 
	scanf("%d",&year1);
    int days0,days1,days2;
    days0=year(year1);
	 days1=days0%7;
	 if(year1>2015){
	 	if(days1<2||days1==2)days2=4+days1;
	 	else if(days1>2)days2=days1-2+0;
	}
	 else if(year1<2015){
	 	if(days1<4||days1==4)days2=4-days1; 
	 	else if(days1>4)days2=6-(days1-4)+1;
	}
	 else if(year1==2015)days2=4;
	int date1,date2=1;
	int end=days2;
	int five,seven;
	printf("  **********%d**********  \n",year1);
	 for(date1=1;date1<13;date1++){
	 	printf("\n        ¡ª¡ª%dÔÂ¡ª¡ª",date1);
	printf("\nSun Mon Tue Wed Thu Fri Sat\n");
	 	if(date1==1||date1==3||date1==5||date1==7||date1==8||date1==10||date1==12){
			 	if(end==5||end==6){
			 	for(five=0;five<6;five++){
	 	    	for(seven=0;seven<7&&date2<32;){
	 	               if(seven<end){
	 	    			printf("    ");
	 	    		    seven++;
	 	    		} 
	 	    		else if(seven==end){
	 	    			if(date2<10){
	 	    			printf(" ");
	 	    			printf("%d",date2);
	 	    			date2++;
	 	    			printf("  ");
	 	    		    seven++;	
	 	    			}
	 	    			else if(date2>10||date2==10){
	 	    			printf(" ");
	 	    			printf("%d",date2);
	 	    			date2++;
	 	    			printf(" ");
	 	    			seven++;
	 	    			}
	 	    		}
	 	    		else if(seven>end)end=seven;
	 	    	}
				if(end==6)end=0;
	 	    	printf("\n");
			}date2=1;
	 	      if(end!=6)end++;
	 	     else if(end==6)end=0;
			 	}
			 	else if(end<5){
			for(five=0;five<5;five++){
	 	    	for(seven=0;seven<7&&date2<32;){
	 	              if(seven<end){
	 	    			printf("    ");
	 	    			seven++;
	 	    		} 
	 	    		else if(seven==end){
	 	    			if(date2<10){
	 	    			printf(" ");
	 	    			printf("%d",date2);
	 	    			date2++;
	 	    			printf("  ");
	 	    		    seven++;	
	 	    			}
	 	    			else if(date2>10||date2==10){
	 	    			printf(" ");
	 	    			printf("%d",date2);
	 	    			date2++;
	 	    			printf(" ");
	 	    			seven++;
	 	    			}
	 	    		}
	 	    		else if(seven>end)end=seven;
	 	   	}
				if(end==6)end=0;
	 	    	printf("\n");
		}date2=1;
	 	       if(end==6)end=0;
	 	      if(end!=6&&end!=0)end++;
	 	  	}
		}
		else if(date1==4||date1==6||date1==9||date1==11){
			 	if(end==6){
			for(five=0;five<6;five++){
	 	    	for(seven=0;seven<7&&date2<31;){
	 	    		if(seven<end){
	 	    			printf("    ");
	 	    			seven++;
	 	    		} 
	 	    		else if(seven==end){
	 	    			if(date2<10){
	 	    			printf(" ");
	 	    			printf("%d",date2);
	 	    			date2++;
	 	    			printf("  ");
	 	    			seven++;	
	 	    			}
	 	    			else if(date2>10||date2==10){
	 	    			printf(" ");
	 	    			printf("%d",date2);
	 	    			date2++;
	 	    			printf(" ");
	 	    			seven++;
	 	    			}
	 	    		}
	 	    		else if(seven>end)end=seven;
	 	}
	 	    	if(end==6)end=0;
	 	    	printf("\n");
	 	   }date2=1;
	 	    if(end!=6)end++;
	 	     else if(end==6)end=0;
	 	}
	 	       else if(end<6){
	 	       	for(five=0;five<5;five++){
	 	    	for(seven=0;seven<7&&date2<31;){
	 	    		if(seven<end){
	 	    			printf("    ");
	 	    			seven++;
	 	    		} 
	 	    		else if(seven==end){
	 	    			if(date2<10){
	 	    			printf(" ");
	 	    			printf("%d",date2);
	 	    			date2++;
	 	    			printf("  ");
	 	    			seven++;	
	 	    			}
	 	    			else if(date2>10||date2==10){
	 	    			printf(" ");
	 	    			printf("%d",date2);
	 	    			date2++;
	 	    			printf(" ");
	 	    			seven++;
	 	    			}	
	 	    		}
	 	    		else if(seven>end)end=seven;
	 	    }
	 	    	if(end==6)end=0;
	 	    	printf("\n");
	 	   }
	 	      if(end==6)end=0;
	 	      if(end!=6&&end!=0)end++;
	 	    }
			 date2=1;
	 	    }
		else if(date1==2){
	 	    if(r_year(year1)==1){
	 	    	for(five=0;five<5;five++){
	 	    	    for(seven=0;seven<7&&date2<30;){
	 	    		if(seven<end){
	 	    			printf("    ");
	 	    			seven++;
	 	    		} 
	 	    		else if(seven==end){
	 	    			if(date2<10){
	 	    			printf(" ");
	 	    			printf("%d",date2);
	 	    			date2++;
	 	    			printf("  ");
	 	    			seven++;	
	 	    			}
	 	    			else if(date2>10||date2==10){
	 	    			printf(" ");
	 	    			printf("%d",date2);
	 	    			date2++;
	 	    			printf(" ");
	 	    			seven++;
	 	    			}
	 	    	}
	 	    		    else if(seven>end){
	 	    			end=seven;
	 	    	}
	 	    	}
	 	    	    if(end==6)end=0; 
	 	    		printf("\n");
	 	            }
			if(end!=6)end++;
	 	     else if(end==6)end=0;
	 	   	}
	 	    else if(r_year(year1)!=1){
	 	    	if(end!=0){
	 	    for(five=0;five<5;five++){
	 	    	for(seven=0;seven<7&&date2<29;){
	 	    		if(seven<end){
	 	    			printf("    ");
	 	    			seven++;
	 	    		} 
	 	    		else if(seven==end){
	 	    			if(date2<10){
	 	    			printf(" ");
	 	    			printf("%d",date2);
	 	    			date2++;
	 	    			printf("  ");
	 	                 seven++;	
	 	    			}
	 	    			else if(date2>10||date2==10){
	 	    			printf(" ");
	 	    			printf("%d",date2);
	 	    			date2++;
	 	    			printf(" ");
	 	    			seven++;
	 	    			}
	 	    	}
	 	    		else if(seven>end)end=seven;
	 	  	}
	 	    	if(end==6)end=0;
	 	    	printf("\n");
		 }	
	 	    date2=1;
	         if(end!=6)end++;
	 	     else if(end==6)end=0;
	 	  	}
	 	    	else if(end==0){
	 	    	for(five=0;five<4;five++){
	 	    	for(seven=0;seven<7&&date2<29;){
	 	    		if(seven<end){
	 	    			printf("    ");
	 	    		seven++;
	 	    		} 
	 	    		else if(seven==end){
	 	    			if(date2<10){
	 	    			printf(" ");
	 	    			printf("%d",date2);
	 	    			date2++;
	 	    			printf("  ");
	 	    		    seven++;	
	 	    			}
	 	    			else if(date2>10||date2==10){
	 	    			printf(" ");
	 	    			printf("%d",date2);
	 	    			date2++;
	 	    			printf(" ");
	 	    			seven++;
	 	    			}
	 	    		}
	 	    		else if(seven>end)end=seven;
	 	  	}
	 	    	if(end==6)end=0;
	 	    	printf("\n");	
	 	    }
	 	    date2=1;
	 	    if(end==6)end=0;
	 	    	}
	 	    	}
	 	     date2=1;
	 	    }
	 } 
	 return 0; 
}
