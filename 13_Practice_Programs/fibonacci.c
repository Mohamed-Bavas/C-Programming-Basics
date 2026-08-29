#include <stdio.h>
void main()
{
    int n;
    int a = 0;
    int b = 1;
    int next;
    int i;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
}