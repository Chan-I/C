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
	
	printf("st.id=%s\n",st.id);
	printf("st.name=%s\n",st.name);
	printf("st.score=%f\n",st.score);
	
	return 0;
}