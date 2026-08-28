#include <stdio.h>
void main()
{
    unsigned char number = 0x08;
    int bit = 3;
    if (number & (1 << bit))
        printf("Bit is SET\n");
    else
        printf("Bit is CLEAR\n");
}