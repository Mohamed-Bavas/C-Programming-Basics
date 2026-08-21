#include <stdio.h>
int main()
{
    int choice;
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
        case 1:
            printf("Addition selected\n");
            break;

        case 2:
            printf("Subtraction selected\n");
            break;

        case 3:
            printf("Multiplication selected\n");
            break;

        case 4:
            printf("Division selected\n");
            break;

        default:
            printf("Invalid choice\n");
    }
    return 0;
}