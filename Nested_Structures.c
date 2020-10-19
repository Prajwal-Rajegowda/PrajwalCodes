#include<stdio.h>
    struct details{
        char name[20], dob[10];
        int age;
    };
    struct emp_details{
        struct details emp;
        float salary;       
    };
    void main()
    {
        struct emp_details employee;
        
        printf("Enter the name of Employee :\n");
        scanf("%s", employee.emp.name);

        printf("Enter the DOB in dd-mm-yyyy format :\n");
        scanf("%s", employee.emp.dob);

        printf("Enter the age \n");
        scanf("%d", &employee.emp.age);

        printf("Enter Salary \n");
        scanf("%f", &employee.salary);

        printf("Entry Successful \n");
        printf("Name : %s \t Age : %d \nDOB : %s \t Salary : %.2f \n", employee.emp.name, employee.emp.age, employee.emp.dob, employee.salary);
    }