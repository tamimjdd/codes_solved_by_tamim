#include<stdio.h>
void main()
{
    int arr[100],x,y,z,s;
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
            {

                for(z=y;z<s;z++)
                {
                    arr[z]=arr[z+1];

                }

                s--;
                y--;
            }
        }
    }
    for(x=0;x<s;x++)
    {
        printf("%d\t",arr[x]);
    }
}
