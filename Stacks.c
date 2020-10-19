#include<stdio.h>
#include<stdlib.h>
#define max 10
    int stack[max];
    int top=-1;
    void push()
    {
        if(top == max-1)
            printf("Stack Overflow, no more elements can be added.\n");
        else
        {
            printf("Enter the %d Element : \n",top+1);
            scanf("%d",&stack[top+1]);
            top++;
            printf("Element %d is entered \n",stack[top]);
        }
    }
    void pop()
    {
        if(top<0)
            printf("Stack Underflow, no more elements can be removed.\n");
        else
            {
                int par = stack[top];
                top--;
                printf("Element dropped is %d \n",par);
            }
    }
    void palin()
    {
        for(int par1=0; par1<=top; par1++)
        {
            if(stack[par1]!=stack[top-par1])
            {
                printf("The Elements donot form a palindrome. \n");
                return;
            }
        }
        printf("The Elements from a palindrome. \n");
    }
    void display()
    {
        if(top == -1)
            printf("No elements are entered, Stack Empty.\n");
        else
        {
            printf("The elements in stack are : \n");
            for(int par2= top; par2>=0; par2--)
                printf("%d \n",stack[par2]);
        }
    }

    void main()
    {

        int choice,item;
        while(1)
        {
            printf("****Menu****\n");
            printf("Enter the number dipicting the STACK operation to be performed\n");
            printf("1.Push\n");
            printf("2.Pop\n");
            printf("3.Display\n");
            printf("4.Palindrome check\n");
            printf("5.Exit\n");
            printf("Enter your Choice: \n");
            scanf("%d",&choice);
            switch(choice)
            {
                case 1 :        push();    
                                break;

                case 2 :        pop();
                                break;

                case 3 :        display();
                                break;

                case 4 :        palin();
                                break;

                case 5 :        exit(0);

                default:        printf("Enter a Valid option\n");

            }

            printf("\n");

        }

    }