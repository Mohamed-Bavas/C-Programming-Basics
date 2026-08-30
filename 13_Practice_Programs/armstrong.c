#include <stdio.h>
void main()
{
    int number;
    int original;
    int remainder;
    int sum = 0;
    int power=0;
    printf("Enter number: ");
    scanf("%d", &number);
    original = number;
    while (number != 0)
    {
        power++;
        number /= 10;
    }
    number = original;
    while(number !=0){
        remainder =number % 10;
        int p=1;
        for(int i=0;i<power;i++){
            p*=remainder;
        }
        sum+=p;
        number/=10;
    }
    if (sum == original)
        printf("Armstrong number\n");
    else
        printf("Not an Armstrong number\n");
}