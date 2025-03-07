// #include <stdio.h>

// int add(int a, int b); // 함수 선언

// int main(void)
// {
//     int result = add(3, 4); // 함수 호출
//     printf("the result is: %d\n", result);
//     return 0;
// }

// // 함수 정의
// int add(int a, int b)
// {
//     return a + b;
// }

// #include <stdio.h>

// int asd(int a, int b);

// int main(void)
// {
//     int result = asd(4, 5);
//     printf("더하기 결과는: %d\n", result);
//     return 0;
// }

// int asd(int a, int b)
// {
//     return a+b;
// }

// #include <stdio.h>

// int add(int a, int b);

// int main(void)
// {
//     int asd = add(3, 4);
//     printf("3에서 4를 더한 값은 %d 입니다. \n", asd);
//     return 0;
// }

// int add(int a, int b)
// {
//     return a+b;
// }

#include <stdio.h>

int add(int a, int b);

int main(void)
{
    int num1, num2;
    scanf("%d", &num1);
    scanf("%d", &num2);

    int result = add(num1, num2);
    printf("%d\n", result);

    return 0;
}

int add(int a, int b)
{
    return a + b;
}