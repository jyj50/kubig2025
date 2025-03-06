#include <stdio.h>

int main(void)
{
    for(int i = 1; i <= 9 ; ++i) // 단수를 지정 1단 ~ 9단까지 i
    {
        printf("-----%d단 입니다.-----\n", i);
        for(int j = 1 ; j <= 9 ; ++j) // 1 부터 9까지 j
        {
            printf("%d X %d = %d\n", i, j, i * j);
        }
    }
    return 0;
}