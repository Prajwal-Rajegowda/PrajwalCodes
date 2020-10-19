#include<stdio.h>
void main()
{
    char ch;
    printf("User input : ");
    ch = getchar();
    if(ch >= 'A' && ch <= 'z')
        printf("%c is an Alphabet ",ch);
    else
        printf("%c is not an Alphabet ", ch);
}