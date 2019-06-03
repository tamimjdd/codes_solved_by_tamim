#include<stdio.h>
void main()
{
    int arr[3][3],r,c,s;
    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
            scanf("%d",&arr[r][c]);
        }
    }
    s=1;
    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
            if(c<r && arr[r][c]!=0)
            {
                s=0;
            }
        }
    }
    if(s==1)
    {
        printf("this is upper triangular matrix");
        for(r=0;r<3;r++)
        {
            for(c=0;c<3;c++)
            {
                if(arr[r][c]!=0)
                {
                    printf("%d",arr[r][c]);
                }
            }
            printf("\n");
        }
    }
    else
    {
        printf("this is not a upper triangular matrix!");
    }
}
