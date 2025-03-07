// 10개의 랜덤한 0~100 배열을 만들고 가장 높은 값을 프린트 하세요.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int dice[10];
    int max;
    srand((unsigned int)time(NULL));
    for(int i = 0 ; i < 10 ; i++)
    {
        dice[i] = rand() % 101;
        printf("%d , ", dice[i]);
    }
    printf("\n");
    max = dice[0];
    for(int i = 0 ; i < 10 ; i++)
    {
        if(max < dice[i]) 
        max = dice[i];
    }
    printf("max : %d\n", max);
    return 0;
}