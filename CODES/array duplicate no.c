#include<stdio.h>
void main()
{
    int arr[100];
    int x,y,s,c=0;
    scanf("%d",&s);
    for(x=0;x<s;x++)
    {
        scanf("%d",&arr[x]);
    }
    for(x=0;x<s;x++)
    {
        for(y=x+1;y<s;y++)
        {
            if(arr[x]==arr[y])
            c++;
            break;
        }
    }
    printf("%d",c);
}
