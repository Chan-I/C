#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
     int i,suijishu,shuru;
	srand((int)time(NULL));
	for(i=0;i<10;i++){
		suijishu=(rand()%10);
		printf("%d\n",suijishu);
	}
	/*scanf("%d",&shuru);
	if(shuru>suijishu)printf("too big");
	else if(shuru<suijishu)printf("too small");
	else if(shuru==suijishu)printf("you win");*/
}
