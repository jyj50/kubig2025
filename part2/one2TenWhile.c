// 1~10 까지 while 로 출력하기

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int i =1;
    while(i < 10)
    {
        printf("%d번 출력입니다.\n", i);
        ++i;
    }

    return 0;
}