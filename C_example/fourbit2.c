// 볼드, 이탈릭, 쉐도우, 언더라인을 표현하는 변수를 만들어라.
// 비트 연산
#include <stdio.h>
// 볼드 1자리 비트 0b000000001
// 이탈릭 2 자리 비트 0b00000010
// 쉐도우 3 자리 비트 0b00000100
// 언더라인 4 자리 비트 0b00001000
// 볼드이면서 언더 라인이면 0b00001001
#define BOLD 0x01
#define ITALIC (0x01 << 1) // 0x02
#define SHADOW (0x01 << 2) // 0x04
#define UL (0x01 << 3) // 0x08

void printAttrib(unsigned char attr);

int main(void)
{
    unsigned char attr; // 8bit 8개의 속성. unsigned 를 넣어서 음수를 지워야함.
    attr = attr ^ attr; // 모두 8
    attr = attr | BOLD; // attr 볼드로 설정
    printAttrib(attr);
    attr = attr | (ITALIC | SHADOW); // atr 이탈릭 쉐도우 추가
    printAttrib(attr);
    attr = attr & (~BOLD);
    printAttrib(attr);
    return 0;
}

void printAttrib(unsigned char attr)
{
    printf("BOLD: %d\n", !(~(attr | ~BOLD)));
    printf("ITALIC: %d\n", !(~(attr | ~ITALIC) >> 1));
    printf("SHADOW: %d\n", !(~(attr | ~SHADOW) >> 2));
    printf("UL: %d\n", !(~(attr | ~UL) >> 3));
    printf("----------------------------------------------\n");
}