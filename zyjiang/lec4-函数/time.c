#include <stdio.h>
#include <time.h>
int main(){
    int start,finish,i,a=3,b=5,c;
    double time;

    start=clock();
	//被计时的程序段
    for(i=0;i<10000000;i++){
		c=a/b;
	}

    finish=clock();

    time=(finish-start)*1.0/CLOCKS_PER_SEC;
	printf("time=%f\n",time);
	//system("pause");
    return 0;
}
