#include<stdio.h>
#include<string.h>
void main()
{
    int par,len,end;
    char str[100],str_rev[100];
    printf("Enter the string : \n");
    gets(str);
    len = strlen(str);
    end = len-1;
    printf("Length = %d \n",len);
    for(par=0; par<len; par++){
        str_rev[par] = str[end];
        end--;
    }
    str_rev[par+1]='0';
    printf("The entered string is %s \n",str);
    printf("The reverse is %s ",str_rev);
}