#include <stdio.h>
#include <string.h>
void main()
{
    char s1[10], s2[10];
    char s_copy[10];
    int num;
    printf("Enter the first string :\n");
    gets(s1);
    for(num=0;s1[num]!='\0'; num++)
        s2[num]=s1[num];
    s2[num] = '\0';
    printf("The entered string is %s\n", s1);
    printf("The copied string is %s\n", s2);
    strcpy(s_copy,s1);
    printf("Copying the string using library functions %s\n", s2);
}