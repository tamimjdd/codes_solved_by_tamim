#include<stdio.h>
void printn(int arr[],int len);
void main()
{
    int arr[100],odd[100],even[100],x,ceven,codd,s;
    scanf("%d",&s);
    for(x=0;x<s;x++)
    {
        scanf("%d",&arr[x]);
    }
    codd=ceven=0;
    for(x=0;x<s;x++)
    {
        if(arr[x]&1)
        {
            odd[codd]=arr[x];
            codd++;
        }
        else
        {
            even[ceven]=arr[x];
            ceven++;
        }
    }
    printf("\neven elements are: \n");
    printn(even,ceven);
    printf("\nodd elements are: \n");
    printn(odd,codd);
}
void printn(int arr[],int len)
{
    int x;
    for(x=0;x<len;x++)
    {
        printf("%d\t",arr[x]);
    }
}
