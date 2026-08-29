#include <stdio.h>
void main()
{
    int number;
    int i;
    int count = 0;
    printf("Enter number: ");
    scanf("%d", &number);
    for (i = 1; i<=number; i++)
    {
        if (number % i == 0)
        {
            count++;
        }
    }
    if (count==2)
        printf("Prime number\n");
    else
        printf("Not a prime number\n");
}