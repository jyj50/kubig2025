#include <stdio.h>

int main(void)
{
    //숫자입력
    int num;
    printf("숫자를 넣으세요: ");
    scanf("%d", &num);
    //절대값 처리
    if(num < 0)
{
    num = -num;
}
printf("주어진 숫자의 절대값은 %d 이다.");
return 0;
}