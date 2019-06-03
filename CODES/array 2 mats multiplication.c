#include<stdio.h>
void main()
{
    int arr[3][3],mat[3][3],r,c,s;
    printf("the 1st matrix. \n");
    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
            scanf("%d",&arr[r][c]);
        }
    }
    printf("the 2nd matrix. \n");
    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
            scanf("%d",&mat[r][c]);
        }
    }
    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
            s=arr[r][c]*mat[r][c];
            arr[r][c]=s;
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
