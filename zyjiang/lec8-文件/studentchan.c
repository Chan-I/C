#include <stdio.h>

typedef struct{
	char id[10];
	char name[20];
	double score;
}student_t;



//输入学生信息
int input(student_t *fp,student_t sts[]){
	int n=0;
		
	while(fscanf(fp,"%s %s %lf",sts[n].id, sts[n].name,&sts[n].score)!=EOF){
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
int output(student_t *fq,student_t sts[],int n){
	int i;
	
	for(i=0;i<n;i++){
		fprintf(fq,"%-10s %-20s %.1f\n",sts[i].id, sts[i].name,sts[i].score);
	}
	
	return 1;
}

#define  MAX_STUDENT 100
int main(){
	student_t students[MAX_STUDENT];
	int count=0;
FILE *fp,*fq;
fp=fopen("score.txt","r");
    if(fp==NULL){
        printf("open input file fail\n");
        return 1;
    }

	count=input(fp,students);
	fclose(fp);

	sort(students,count);

   
	fq=fopen("we1.txt","w"); 
    if(fq==NULL){
        printf("open output file fail\n");
        return 1;
    }

	output(fq,students,count);
	fclose(fq);
	system("pause");
	return 0;
}
