#include <stdio.h>

int main(){
	char names1[100][20]={"Li ming","Liu xiaodong","Zhang bin","Zhang kefeng","Qiao ting"};
	char *names2[100]={"Li ming","Liu xiaodong","Zhang bin","Zhang kefeng","Qiao ting"};
	int i=0;
	for(i=0;i<5;i++){
		printf("address of names1[%d][0] is %d\n",i,&names1[i][0]);
	}

	for(i=0;i<5;i++){
		printf("address of names2[%d][0] is %d\n",i,&names2[i][0]);
	}
     system("pause"); 
	return 0;
}
