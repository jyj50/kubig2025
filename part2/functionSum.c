// 매개변수 두개를 int로 받아 더해서 리턴하는 함수
#include <stdio.h>

int sum(int a, int b);
// 선언을 먼저 한 것
int main(void)
{
    int a = 10, b = 20;
    int result;

    result = sum(a, b);
    // a와 b는 메인의 지역 변수임
    printf("%d + %d = %d 입니다.", a, b, result);
    return 0;
}

int sum(int a, int b)
{
    int temp;
    temp = a + b;
    // int a는 메인에 어사인 된다.
    // 위쪽 지역 변수의 a와 b는 아래쪽에 있는 a와 b와 다른 메모리를 가진다
    return temp;
}