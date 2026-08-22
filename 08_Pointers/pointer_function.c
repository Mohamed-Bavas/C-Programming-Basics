#include <stdio.h>
void add(int *a, int *b)
{
    printf("Sum = %d\n", *a + *b);
}
void main()
{
    int x = 10;
    int y = 20;
    add(&x, &y);
}