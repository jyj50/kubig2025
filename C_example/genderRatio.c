#include <stdio.h>

int main(void)
{
    int man, woman;
    double sum, manRate, womanRate;

    printf("남자의 인원수를 넣으세요: ");
    scanf("%d", &man);
    printf("여자의 인원수를 넣으세요: ");
    scanf("%d", &woman);
    
    sum = (double)man + (double)woman;
    manRate = man / sum * 100;
    womanRate = woman / sum * 100;

    printf("남자의 수는 %d명이고 여자의 수는 %d명이다. \n" ,man, woman);
    printf("총 수는 %.f명\n남자의 비율은 %.2f%%\n여자의 비율은 %.2f%%\n", sum, manRate, womanRate);
    
    return 0;
}