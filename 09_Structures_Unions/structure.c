#include <stdio.h>
struct Student
{
    int roll_no;
    char name[30];
    float marks;
};
void main()
{
    struct Student student = {101, "Bavas", 85.5};
    printf("Roll No = %d\n", student.roll_no);
    printf("Name = %s\n", student.name);
    printf("Marks = %.2f\n", student.marks);
}