#include <stdio.h>
union Data
{
    int number;
    float value;
    char letter;
};
int main()
{
    union Data data;
    data.number = 10;
    printf("Integer = %d\n", data.number);
    data.value = 20.5;
    printf("Float = %.2f\n", data.value);
    data.letter = 'A';
    printf("Character = %c\n", data.letter);
    return 0;
}