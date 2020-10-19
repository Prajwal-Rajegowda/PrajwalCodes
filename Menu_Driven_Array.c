//https://driveuploader.com/upload/YNazuIo6TO/
#include<stdio.h>
    int num, par1, arr[100];
    void cre_array()
    {
        printf("Enter the number of array elements : \n");
        scanf("%d",&num);
        for(par1=0; par1<num; par1++)
        {
            printf("Enter %dth element : \n",par1);
            scanf("%d",&arr[par1]);
        }
        return;
    }
    void dis_array()
    {
        printf("The array elements are : \n ");
        for(par1=0; par1<num; par1++)
        {
            printf("%d \t",arr[par1]);
        }
        printf("\n");
        return;
    }
    void ins_array()
    {
        int pos,ele;
        printf("Enter the position of insertion : \n");
        scanf("%d",&pos);
        if(pos<0 || pos>num)
            {
                printf("Incorrect value \n");
                return;
            }
        printf("Enter value : \n");
        scanf("%d",&ele);
        for(par1=num; par1>=pos-1; par1--)
            arr[par1+1]=arr[par1];
        arr[pos]=ele;
        num++;
        return;
    }
    void del_array()
    {
        int pos;
        printf("Enter the position of deletion : \n");
        scanf("%d",&pos);
        if(pos<0 || pos>num)
            {
                printf("Incorrect value \n");
                return;
            }
        for(par1=pos; par1<num; par1++)
            arr[par1]=arr[par1+1];
        num--; 
        return;  
    }
    void main()
    {
        char ch,en = '\0';
        while(en!='A')
        {
            printf("Enter your choice : \n1)Create array\n2)Display array\n3)Insert array element\n4)Delete array element\n5)Exit\n");
            ch = getchar();
            switch(ch)
            {
                case '1' : cre_array();
                           break;
                case '2' : dis_array();
                           break;
                case '3' : ins_array();
                           break;
                case '4' : del_array();
                           break;
                case '5' : en = 'A';
                           break;
            }
        }
    }