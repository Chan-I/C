#include<stdio.h>
#include<string.h>
struct tongxin{
	char name[200];
	char sex[200];
	char num[200];
	char email[200];
	char address[200];
};
	int main(){
		int a=0;
	
		struct tongxin yonghu[500];
		printf("��ӭʹ��yiyi��ͨ�Ź��������\n");
	
		while(1){
			   printf("����û������� 0\n") ;
		       printf("��ѯ�û������� 1\n");
		       printf("ɾ���û������� 2\n");
		       printf("ȫ����������� 3\n");
		       int tiaojian; 
		       scanf("%d",&tiaojian);
			if(tiaojian==0){
				printf("����������\n");
				getchar();
				gets(yonghu[a].name);
				printf("�������Ա�\n");
				gets(yonghu[a].sex);
				printf("�������ֻ�\n");
				gets(yonghu[a].num);
				printf("�������ʼ�\n");
				gets(yonghu[a].email);
				printf("�������ַ\n");
				gets(yonghu[a].address);
				a++;
		}
	       else if(tiaojian==1){
			    char chaxun[200]={0};
			    int i;
				printf("������\n");
			    getchar();
			    gets(chaxun);
				for(i=0;i<a;i++){
				 if(strcmp(yonghu[i].name,chaxun)==0){
			        
					printf("�Ա� %s\n�ֻ� %s\n���� %s\n��ַ %s\n",yonghu[i].sex,yonghu[i].num,yonghu[i].email,yonghu[i].address);
			       printf("\n");
				   }	
			    } 
			}
			else if(tiaojian==2){
				char shanchu[200]={0};
				printf("������\n");
				scanf("%s",shanchu);
				int i;
				for(i=0;i<a;i++){
				if(strcmp(shanchu,yonghu[i].name)==0){
					yonghu[i].name[0]='\0';
					yonghu[i].sex[0]='\0';
					yonghu[i].num[0]='\0';
					yonghu[i].email[0]='\0';
					yonghu[i].address[0]='\0';
				    }
			    }	
			}
			else {
				int i=0;
				for(i=0;i<a;i++){
					if(yonghu[i].name[0]==0){
						continue;
					}
					else if(yonghu[i].name[0]!=0){
						printf("������%s\n",yonghu[i].name);
						printf("�Ա�%s\n",yonghu[i].sex);
				        printf("�绰��%s\n",yonghu[i].num);
				        printf("�ʼ���%s\n",yonghu[i].email);
				        printf("��ַ��%s\n",yonghu[i].address);
				        printf("\n");
				        printf("\n");
				    }
				}
		    }
		} 
	return 0;
}
	
