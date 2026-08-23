#include <stdio.h>
struct Address
{
    char city[30];
    int pincode;
};
struct Student
{
    int roll_no;
    char name[30];
    struct Address address;
};
void main()
{
    struct Student student = {
        101,
        "Bavas",
        {"Chennai", 600001}
    };
    printf("Roll No = %d\n", student.roll_no);
    printf("Name = %s\n", student.name);
    printf("City = %s\n", student.address.city);
    printf("Pincode = %d\n", student.address.pincode);
}