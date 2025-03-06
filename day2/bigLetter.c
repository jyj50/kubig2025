// 임의의 char를 scanf로 하나 받아서 대문자인지 소문자인지 출력하세요.

#include <stdio.h>

int main(void)
{
    char num;

    printf("문자를 입력하면 대문자인지 소문자인지 확인 후 출력합니다: ");
    scanf("%c", &num);

    if(isupper(num))
    {
        printf("%c 해당 문자는 대문자입니다.\n", num);
    }else
    {    
        printf("%c 해당 문자는 소문자입니다.\n", num);
    }
    
    return 0;
}