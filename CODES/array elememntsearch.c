#include<stdio.h>
void main()
{
    int arr[100];
    int s,x,n,f;
    scanf("%d",&s);
    for(x=0;x<s;x++)
    {
        scanf("%d",&arr[x]);
    }
    scanf("%d",&n);
    f=0;
    for(x=0;x<s;x++)
    {
        if(arr[x]==n)
            f=1;
        printf("%d is found at position %d\n",n,x+1);
        break;
    }
    if(f==0)
        printf("%d isnt in the array",n);
}
