#include <stdio.h>
void main()
{
    int number;
    int reverse = 0;
    int remainder;
    printf("Enter number: ");
    scanf("%d", &number);
    while (number != 0)
    {
        remainder = number % 10;
        reverse = reverse * 10 + remainder;
        number /= 10;
    }
    printf("Reverse = %d\n", reverse);
}