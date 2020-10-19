#include<stdio.h>
union student
    {
        char name[20], dob[20], USN[30];
    };
void main()
{
    union student stu;
    printf("Enter the student name : \n");
    gets(stu.name);
    printf("Name of Student is %s \n", stu.name);
    printf("Enter DOB : \n");
    gets(stu.dob);
    printf("Enter USN : \n");
    gets(stu.USN);
    printf("USN = %s \n", stu.USN);
    printf("DOB = %s \n", stu.dob);
    printf("Size of Union : %d ", sizeof(union student));
}
// Note : The Error in the DOB result is intentional and it is to explain the concept of Unions.