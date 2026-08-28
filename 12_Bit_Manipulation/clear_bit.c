#include <stdio.h>
void main()
{
    unsigned char number = 0xFF;
    int bit = 3;
    number = number & ~(1 << bit);
    printf("Result = 0x%02X\n", number);
}