#include <stdio.h>
int main()
{
    int age;
    int citizen;
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter citizenship status (1 = Yes, 0 = No): ");
    scanf("%d", &citizen);
    if (age >= 18)
    {
        if (citizen == 1)
            printf("Eligible to vote\n");
        else
            printf("Not eligible: Citizenship required\n");
    }
    else
    {
        printf("Not eligible: Age below 18\n");
    }
    return 0;
}