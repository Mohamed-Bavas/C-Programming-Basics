#include <stdio.h>
void change(int x)
{
    x = 100;
}
int main()
{
    int a = 10;
    printf("Before function = %d\n", a);
    change(a);
    printf("After function = %d\n", a);
    return 0;
}