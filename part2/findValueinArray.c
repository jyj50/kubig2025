// 10개 짜리 배열을 랜덤으로 0 ~ 100 만들어서 인트를 하나 scanf로 받는다.
// 같은 원소가 있는지 index가 몇 번째 인지 프린트 하시오.

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