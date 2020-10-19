#include<stdio.h>
#include<string.h>
struct Book
{
    char title[100]; 
    char author[100]; 
    char subject[100];
    char book_id[100];
};
void main()
{
    struct Book B[2];
    strcpy(B[0].title,"The Da Vinci Code"); 
    strcpy(B[0].author,"Dan Brown");
    strcpy(B[0].subject,"Mystery, Crime Fiction");
    strcpy(B[0].book_id,"14GHC");
    strcpy(B[1].title,"Angels and Demons");
    strcpy(B[1].author,"Dan Brown");
    strcpy(B[1].subject,"Crime Fiction, Mystery");
    strcpy(B[1].book_id,"16B5Y");
    printf ("Book 1 : %s \t Author : %s \t Subject : %s \t Book ID %s\n", B[0].title,B[0].author,B[0].subject,B[0].book_id);
    printf ("Book 2 : %s \t Author : %s \t Subject : %s \t Book ID %s\n", B[1].title,B[1].author,B[1].subject,B[1].book_id);
}