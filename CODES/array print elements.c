#include<stdio.h>
void main()
{
    int arr[100];
    int x,n;
    scanf("%d",&n);
    for(x=0;x<n;x++)
    {
        scanf("%d",&arr[x]);
    }
    for(x=0;x<n;x++)
    {
        printf("%d, ",arr[x]);
    }
}
