#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 5
char x,Q[MAX];
int f=-1,r=-1;

void insert();
char delete();
void display();
void main()
{
int choice;
while (8){
printf("Menu\n");
printf("1. insert\n");
printf("2. delete\n");
printf("3. display\n");
printf("4. exit\n");
printf("Enter choice\n");
scanf("%d",&choice);
switch(choice){
case 1: insert();
        break;
case 2: delete();
        break;
case 3: display();
        break;
case 4: exit(0);
 } 
}
}
void insert(){
    if ((r+1)%MAX==f){
         printf("The queue is full\n");
         return;
        }
    else{  
        char ele;
        printf("Enter the element to be inserted : ");
        ele = getchar();
        insert(ele);
        r=((r+1)%MAX);
        Q[r]= ele;
        }
    return;
          }
char delete(){
           char x;
    if ((f+1)%MAX==r||r==-1){
        printf("Q is empty\n");
        
    }
    else{
        f=(f+1)%MAX;
        x=Q[f];
         printf("The deleted item is %c\n",x);
          }
}
void display(){
int i;
if(f == -1){
    printf("The Queue is empty \n");
    return;}
for (i=f;i<=r;i++){
        printf("%c\t",Q[i]);
    }
}