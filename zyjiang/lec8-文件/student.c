#include <stdio.h>

typedef struct{
	char id[10];
	char name[20];
	double score;
}student_t;



//输入学生信息
int input(student_t sts[]){
	int n=0;
		
	while(scanf("%s %s %lf",sts[n].id, sts[n].name,&sts[n].score)==3){
		n++;
	}

	return n;
}
//按成绩排序
void sort(student_t sts[],int n){
	int i,j,k;
	for(i=0;i<n-1;i++){
		for(k=i,j=i;j<n;j++){
			if(sts[j].score<sts[k].score)k=j;
		}
		if(k!=i){
			student_t st=sts[i];
			sts[i]=sts[k];
			sts[k]=st;
		}
	}
}

//输出按成绩排序后的学生信息
int output(student_t sts[],int n){
	int i;
	
	for(i=0;i<n;i++){
		printf("%-10s %-20s %.1f\n",sts[i].id, sts[i].name,sts[i].score);
	}
	
	return 1;
}

#define  MAX_STUDENT 100
int main(){
	student_t students[MAX_STUDENT];
	int count=0;
	count=input(students);
	sort(students,count);
	output(students,count);
	
	return 0;
}