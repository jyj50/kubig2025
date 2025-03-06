// 숫자를 입력 받아서 양수, 제로, 음수를 출력하는 프로그램
// if else 구문으로 만드세요
// printf은 한 번만 사용해서 만들기

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    // char *string;
    scanf("%d", &num);
    // if(num > 0)
    // {
    //     string = "양수";
    // } 
    // else if(num < 0)
    // {
    //     string = "음수";
    // }
    // else
    // {
    //     string = "제로";
    // }
    // printf("%d 이 숫자는 %s 입니다. \n", num, string);
    printf("양수 : %d\n제로 : %d\n음수 : %d\n", abs(num), num * 0, -abs(num));
    // else
    // {
    // printf("양수 : %d\n제로 : %d\n음수 : %d\n", abs(num), num * 0, -abs(num));  
    // }
    // }
    return 0;
}
