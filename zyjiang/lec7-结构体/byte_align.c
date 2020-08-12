#include <stdio.h>
#include <string.h>

typedef struct{
	char id[10];
	char name[20];
	double score;
}student_t;

int main(){
	student_t st={"03101001"/*,"li ming",90*/};
	//strcpy(st.id,"03101001");
	//strcpy(st.name,"li ming");
	//st.score=90;

	printf("sizeof(st)=%d\n",sizeof(st));
	printf("address of st.id=%d\n",&st.id);
	printf("address of st.name=%d\n",&st.name);
	printf("address of st.score=%d\n",&st.score);
    system("pause");
	return 0;
}
