#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int randomNumber[10];
    int sum = 0;
    srand(time(NULL));
    // 배열에 값을 넣기
    for (int i = 0; i < 10; ++i)
    {
        randomNumber[i] = rand() % 101;
    }
    for (int i = 0; i < 10; ++i)
    {
        sum += randomNumber[i];
        printf("%d ,", randomNumber[i]);
    }
    printf("\n10개 배열의 총합은 %d 이다.\n", sum);
    return 0;
}