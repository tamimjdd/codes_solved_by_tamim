#include<stdio.h>
void main()
{
    int arr[3][3],mat[3][3],r,c,s,t;
    printf("the 1st matrix is : \n");
    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
            scanf("%d",&arr[r][c]);
        }
    }
    printf("the 2nd matrix is: \n");
    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
            scanf("%d",&mat[r][c]);
        }
    }
    t=1;
    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
            if(arr[r][c]!=mat[r][c])
            {
                t=0;
                break;
            }
        }
    }
    if(t==1)
    {
        printf("the matrix are equal.\n");
    }
    else
    {
        printf("the matrix are not equal.\n");
    }
}
