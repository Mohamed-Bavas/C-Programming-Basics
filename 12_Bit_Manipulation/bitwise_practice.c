#include <stdio.h>
void main()
{
    unsigned char number = 0x0A;
    printf("Original = 0x%02X\n", number);
    number |= (1 << 2);
    printf("Set bit 2 = 0x%02X\n", number);
    number &= ~(1 << 1);
    printf("Clear bit 1 = 0x%02X\n", number);
    number ^= (1 << 3);
    printf("Toggle bit 3 = 0x%02X\n", number);
}