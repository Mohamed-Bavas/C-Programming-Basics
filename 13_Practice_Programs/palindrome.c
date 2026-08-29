#include <stdio.h>
void main()
{
    int number;
    int original;
    int reverse = 0;
    int remainder;
    printf("Enter number: ");
    scanf("%d", &number);
    original = number;
    while (number != 0)
    {
        remainder = number % 10;
        reverse = reverse * 10 + remainder;
        number /= 10;
    }
    if (original == reverse)
        printf("Palindrome number\n");
    else
        printf("Not a palindrome\n");
}