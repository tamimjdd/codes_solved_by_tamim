#include<stdio.h>
void main()
{
    int arr[100],x,n,s,p;
    scanf("%d",&s);
    for(x=0;x<s;x++)
    {
        scanf("%d",&arr[x]);
    }
    scanf("%d",&p);
    scanf("%d",&n);
    if(p>s+1||p<=0)
    {
        printf("invalid input!");
    }
    else
    {
        for(x=s;x>=p;x--)
        {
            arr[x]=arr[x-1];
        }
        arr[p-1]=n;
        s++;
    }
    for(x=0;x<s;x++)
    {
        printf("%d\t",arr[x]);
    }
}
