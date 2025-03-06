// 1 과 9 사이의 숫자인지 확인해서 맞으면 1 틀리면 0을 프린트하세요.
#include <stdio.h>

int main(void)
{
    int num;

    printf("1과 9 사이의 숫자면 1이 프린트 됩니다. 나머진 0: ");
    scanf("%d\n", &num);

    printf("1 <= %d <= 9 : %d", num, (1 <= num) && (num <= 9));
    return 0;
}