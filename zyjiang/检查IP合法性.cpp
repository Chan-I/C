#include <stdio.h>
#define DETECT(p) ((*p)=='A')
#include <ctype.h>

bool IsIPAddress(const char * str){
    //先判断形式是否合法，

    //检查是否只包含点和数字
    for(int i = 0; str[i] != '\0'; i++){
        if(!isdigit(str[i]) && str[i] != '.')
            return false;
    }

    //检查是否形如X.X.X.X
    int count = 0;
    for(int i = 0; str[i+1] != '\0'; i++){
        if(isdigit(str[i]) && str[i+1] == '.' )
            count++;
    }
    if(count != 3)
        return false;

    //检查区间是否合法
    int temp = 0; 
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] != '.'){
            temp = (temp * 10 + int(str[i] - '0'));
           
			printf("%d\n",temp);
        }
        
        else{
            if(temp <= 255){
                temp = 0;
            }
            else
                return false;
        }
    }

    //最后一个也要判断
    if(temp > 255)
        return false;

    //通过所有测试，返回正确
    return true;
}
int main()

{

printf("%d",IsIPAddress("192.168.78.1"));





return 0 ;

}
