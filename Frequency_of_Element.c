#include<stdio.h>
#include<string.h>
void main()
{
    char str[100],ele;
    int num =0 ,par;
    printf("Enter the string : ");
    gets(str);
    printf("Enter the element to be found : ");
    ele = getchar();
    printf("Element entered is %c \n",ele);
    for( par=0; str[par] != '\0'; par++)
        if(ele == str[par])
            num++;
    printf("Frequency of %c in %s = %d ", ele, str, num);
}