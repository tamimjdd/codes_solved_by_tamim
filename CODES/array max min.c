#include<stdio.h>
void main()
{
    int arr[100];
    int x,max,min,s;
    scanf("%d",&s);
    for(x=0;x<s;x++)
    {
        scanf("%d",&arr[x]);
    }
    min=arr[0];
    for(x=0;x<s;x++)
    {
        if(arr[x]>max)
        {
            max=arr[x];
        }
        if(arr[x]<min)
        {
            min=arr[x];
        }
    }
    printf("max element %d\n",max);
    printf("min element %d",min);
}
