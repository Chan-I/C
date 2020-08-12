#include <stdio.h>
#define DETECT(p) ((*p)=='A')
#include <ctype.h>

bool IsIPAddress(const char * str){
    //���ж���ʽ�Ƿ�Ϸ���

    //����Ƿ�ֻ�����������
    for(int i = 0; str[i] != '\0'; i++){
        if(!isdigit(str[i]) && str[i] != '.')
            return false;
    }

    //����Ƿ�����X.X.X.X
    int count = 0;
    for(int i = 0; str[i+1] != '\0'; i++){
        if(isdigit(str[i]) && str[i+1] == '.' )
            count++;
    }
    if(count != 3)
        return false;

    //��������Ƿ�Ϸ�
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

    //���һ��ҲҪ�ж�
    if(temp > 255)
        return false;

    //ͨ�����в��ԣ�������ȷ
    return true;
}
int main()

{

printf("%d",IsIPAddress("192.168.78.1"));





return 0 ;

}
