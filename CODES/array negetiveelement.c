#include<stdio.h>
void main()
{
    int arr[100],x,s;
    scanf("%d",&s);
    for(x=0;x<s;x++)
    {
        scanf("%d",&arr[x]);
    }
    for(x=0;x<s;x++)
    {
        if(arr[x]<0)
        {
            printf("%d",arr[x]);
        }
    }
}
