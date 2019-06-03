#include<stdio.h>
void main()
{
    int arr[100],freq[100];
    int x,s,y,count;
    scanf("%d",&s);
    for(x=0;x<s;x++)
    {
        scanf("%d",&arr[x]);
        freq[x]=-1;
    }
    for(x=0;x<s;x++)
    {
        count=1;
        for(y=x+1;y<s;y++)
        {
            if(arr[x]==arr[y])
            {
                count++;
                freq[y]=0;
            }
        }
        if(freq[x]!=0)
        {
            freq[x]=count;
        }
    }
    for(x=0;x<s;x++)
    {
        if(freq[x]!=0)
        {
            printf("%d occurs %d times\n",arr[x],freq[x]);
        }
    }
}
