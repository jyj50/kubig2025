// 1부터 10까지

#include <stdio.h>

int main(void)
{
    for(int i = 0 ; i < 10 ; ++i)
    {
        printf("출력되는 숫자는 %d 입니다.\n", i);
    }
    for(int i = 0 ; i <= 10 ; ++i)
    {
        printf("출력되는 숫자는 %d 입니다.\n", i);
    }
    return 0;
}