// 두 난수(0~100)를 발생 시켜서 비교하기
// 10 까지의 수를 비교해서 같아 질 때까지 반복.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(void)
{
    int a, b;
    double rand1, rand2;
    int i = 0;
    while(true)
    {
    i++;
    srand((unsigned)time(NULL)+i); // random 세팅
    rand1 = rand()/(double)RAND_MAX*10;
    srand((unsigned)time(NULL) + 10000); // random 세팅
    rand2 = rand()/(double)RAND_MAX*10;

    a = rand1;
    b = rand2;
    printf("0~100 사이의 랜덤한 숫자: %f\n", rand1);
    printf("0~100 사이의 랜덤한 숫자: %f\n", rand2);
    printf("%d > %d : %s\n", a, b, a > b ? "true" : "false");
    printf("%d < %d : %s\n", a, b, a < b ? "true" : "false");
    printf("%d == %d : %s\n", a, b, a == b ? "true" : "false");
    printf("%d != %d : %s\n", a, b, a != b ? "true" : "false");
    if(a == b)
    break;
    }
    return 0;
}