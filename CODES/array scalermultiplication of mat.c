#include<stdio.h>
void main()
{
    int arr[3][3],r,c,t;
    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
            scanf("%d",&arr[r][c]);
        }
    }
    printf("\nthe scaler multiplication of the matrix is: \n");
    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
            t=arr[r][c]*2;
            arr[r][c]=t;
        }
    }
    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
            printf("%d\t",arr[r][c]);
        }
        printf("\n");
    }
}
