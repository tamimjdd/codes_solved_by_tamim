#include<stdio.h>
void main()
{
    int arr1[100],arr2[100];
    int s,x;
    scanf("%d",&s);
    for(x=0;x<s;x++)
    {
        scanf("%d",&arr1[x]);
    }
    for(x=0;x<s;x++)
    {
        arr2[x]=arr1[x];
    }
    printf("elements of 1st array: ");
    for(x=0;x<s;x++)
    {
        printf("%d\t",arr1[x]);
    }
    printf("\nelement of 2nd array: ");
    for(x=0;x<s;x++)
    {
        printf("%d\t",arr2[x]);
    }
}
