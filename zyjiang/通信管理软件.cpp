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
		printf("欢迎使用yiyi的通信管理软件！\n");
	
		while(1){
			   printf("添加用户请输入 0\n") ;
		       printf("查询用户请输入 1\n");
		       printf("删除用户请输入 2\n");
		       printf("全部输出请输入 3\n");
		       int tiaojian; 
		       scanf("%d",&tiaojian);
			if(tiaojian==0){
				printf("请输入姓名\n");
				getchar();
				gets(yonghu[a].name);
				printf("请输入性别\n");
				gets(yonghu[a].sex);
				printf("请输入手机\n");
				gets(yonghu[a].num);
				printf("请输入邮件\n");
				gets(yonghu[a].email);
				printf("请输入地址\n");
				gets(yonghu[a].address);
				a++;
		}
	       else if(tiaojian==1){
			    char chaxun[200]={0};
			    int i;
				printf("姓名：\n");
			    getchar();
			    gets(chaxun);
				for(i=0;i<a;i++){
				 if(strcmp(yonghu[i].name,chaxun)==0){
			        
					printf("性别 %s\n手机 %s\n邮箱 %s\n地址 %s\n",yonghu[i].sex,yonghu[i].num,yonghu[i].email,yonghu[i].address);
			       printf("\n");
				   }	
			    } 
			}
			else if(tiaojian==2){
				char shanchu[200]={0};
				printf("姓名：\n");
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
						printf("姓名：%s\n",yonghu[i].name);
						printf("性别：%s\n",yonghu[i].sex);
				        printf("电话：%s\n",yonghu[i].num);
				        printf("邮件：%s\n",yonghu[i].email);
				        printf("地址：%s\n",yonghu[i].address);
				        printf("\n");
				        printf("\n");
				    }
				}
		    }
		} 
	return 0;
}
	
