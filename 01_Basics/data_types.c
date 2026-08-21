#include <stdio.h>
int main()
{
    int number = 10;
    float decimal = 10.5;
    double value = 20.12345;
    char letter = 'A';
    printf("Integer = %d\n", number);
    printf("Float = %.2f\n", decimal);
    printf("Double = %.5lf\n", value);
    printf("Character = %c\n", letter);
    return 0;
}