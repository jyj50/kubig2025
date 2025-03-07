// 값으로 부른다. (call by value) 참조로 부른다 (call by refernce)

#include <stdio.h>

int f(void);
void f2(int *pResult);
// f1, f2는 함수 선언임 f1과 f2는 같은 기능을 함.

int main(void)
{
    int f1_result = f();
    printf("f1의 반환 결과는: %d\n", f1_result);

    int f2_result;
    f2(&f2_result);
    printf("f2의 처리 결과는: %d\n", f2_result);
    return 0;
}

int f(void)
{
    return 100;
}

void f2(int *pResult)
{
    *pResult = 100;
}