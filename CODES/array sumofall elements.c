#include<stdio.h>
void main()
{
    int arr[100];
    int x,s,sum=0;
    scanf("%d",&s);
    for(x=0;x<s;x++)
    {
        scanf("%d",&arr[x]);
    }
    for(x=0;x<s;x++)
    {
        sum+=arr[x];
    }
    printf("%d",sum);
}
