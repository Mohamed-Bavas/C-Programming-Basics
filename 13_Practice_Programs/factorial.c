#include <stdio.h>
void main()
{
    int n;
    int i;
    unsigned long long factorial = 1;
    printf("Enter number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    printf("Factorial = %llu\n", factorial);
}