// 1~10 까지 while 로 출력하기

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int i =1;
    do
    {
        printf("%d번 출력입니다.\n", i);
        ++i;
    } while(i < 10);

    return 0;
}