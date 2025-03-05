// 볼드, 이탈릭, 쉐도우, 언더라인을 표현하는 변수를 만들어라.
// 비트 연산
// 볼드 1자리 비트 0b000000001
// 이탈릭 2 자리 비트 0b00000010
// 쉐도우 3 자리 비트 0b00000100
// 언더라인 4 자리 비트 0b00001000
// 볼드이면서 언더 라인이면 0b00001001
#include <stdio.h>

int main(void)
{
    unsigned char attr; // 8bit 8개의 속성. unsigned 를 넣어서 음수를 지워야함.
    attr = attr ^ attr; // 모두 8
    attr = attr | 0b00000001; // attr 볼드로 설정
    printf("attr: 0x%02x\n", attr);
    attr = attr | (0b00000010 + 0b00000100); // atr 이탈릭 쉐도우 추가
    printf("attr: 0x%02x\n", attr);
    attr = attr & (~0b00000001);
    printf("attr: 0x%02x\n", attr);
    return 0;
}