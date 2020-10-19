#include<stdio.h>
char str[50], pat[20], rep[20], ans[50];
int  par1=0, par2=0, par3=0, par4=0, par5=0, flag=0;
void stringmatch()
{
    while(str[par1] !='\0')
    {
        if(str[par2] == pat[par3])
        {
            par2++;
            par3++;
            if(pat[par3] == '\0')
            {             
                flag = 1;
                for(par4=0; rep[par4]!='\0'; par4++, par5++)
                    ans[par5] = rep[par4];
                par3 = 0;
                par1 = par2;
            }
        }
        else
        {
            ans[par5]= str[par1];
            par5++;
            par1++;
            par2=par1;
            par3=0;
        }
    }
    ans[par5]='\0';
}
void main()
{
    printf("Enter the string:\n");
    gets(str);
    printf("Enter the string to be found:\n");
    gets(pat);
    printf("Enter the replace string:\n");
    gets(rep);
    stringmatch();
    if(flag == 1)
        printf("Resultant string is \" %s \"\n", ans);
    else
        printf("Pattern string is not found\n");
}