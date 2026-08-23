#include <stdio.h>
struct Student
{
    int roll_no;
    char name[30];
    float marks;
};
void main()
{
    struct Student students[2] = {
        {101, "Bavas", 85.5},
        {102, "Arun", 90.0}
    };
    int i;
    for (i = 0; i < 2; i++)
    {
        printf("Roll No = %d\n", students[i].roll_no);
        printf("Name = %s\n", students[i].name);
        printf("Marks = %.2f\n\n", students[i].marks);
    }
}