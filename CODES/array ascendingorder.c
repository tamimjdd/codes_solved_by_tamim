#include<stdio.h>
void main()
{
    int arr[100];
    int x,y,s,t;
    scanf("%d",&s);
    for(x=0;x<s;x++)
    {
        scanf("%d",&arr[x]);
    }
    for(x=0;x<s;x++)
    {
        for(y=x+1;y<s;y++)
        {
            if(arr[y]<arr[x])
            {
                t=arr[x];
                arr[x]=arr[y];
                arr[y]=t;
            }
        }
    }
    for(x=0;x<s;x++)
    {
        printf("%d\n",arr[x]);
    }
}
