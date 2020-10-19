#include<stdio.h>
void main()
{
    int a[20],i,ele,n,t=0;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(i=0;i<n;++i)
        scanf("%d",&a[i]);
    printf("Enter the element to be serached:");
    scanf("%d", &ele);
    for(i=0;i<n;++i)
        if(a[i]==ele)
            t = i;
    if(t!=0)
    printf("Element found at index %d", t);
    else
    printf("Element not found");
}