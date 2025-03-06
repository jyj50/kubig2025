#include <stdio.h>

int main(void)
{
    int sum = 0; // 선언과 동시에 할당해도 상관없음.
                 // int sum
                 // sum = 0; 이것은 정석임.
    for(int i = 100 ; i <= 10000 ; ++i)
    {
        sum += i;
    }
    printf("100부터 10000까지 더한 숫자는 %d 입니다.\n", sum);
    return 0;
}

