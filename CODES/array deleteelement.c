#include<stdio.h>
void main()
{
    int arr[100],x,s,p;
    scanf("%d",&s);
    for(x=0;x<s;x++)
    {
        scanf("%d",&arr[x]);
    }
    scanf("%d",&p);
    if(p==s+1||p<0)
    {
        printf("invalid input!");
    }
    else
    {
        for(x=p-1;x<s-1;x++)
        {
            arr[x]=arr[x+1];
        }
    }
    for(x=0;x<s-1;x++)
    {
        printf("%d\t",arr[x]);
    }
}
