#include <stdio.h>
int a=10,b=10; //全局变量
void func1(){
  printf("func1:a=%d,b=%d\n",a,b);
}    
void func2(){
    int a=30,b=30;
    printf("func2:a=%d,b=%d\n",a,b);
}
int c=1,d=1;
void func3(int a,int b){
    printf("fuc3:a=%d,b=%d\n",a,b);
}
int main(){
    int a=20,b=20;
    func1();
    func2();
    func3(a,b);
   printf("func4:a=%d,b=%d\n",a,b);
    {
        int a=40,b=40;
    printf("func5:a=%d,b=%d\n",a,b);
    }
printf("func6:a=%d,b=%d\n",a,b);
system("pause");
}
