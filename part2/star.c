// 별표를 5줄 하나 씩 늘어나는 모양을 출력
// *
// **
// ***
// 이런 식으로 출력하는 것
// 별표를 5줄 피라미드 모양으로 출력하세요.
//    *
//   ***
//  *****
// 이런 식으로 출력
#include <stdio.h>

int main(void)
{
    for(int i = 1 ; i <=5 ; ++i)
    {
        for(int j = 1 ; j <= i ; ++j)
        {
        printf("*");
        }
    printf("\n");
    }
    return 0;
}