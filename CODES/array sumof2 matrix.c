#include<stdio.h>
void main()
{
    int arr[3][3],mat[3][3],sum[3][3],r,c;
    printf("the first matrix: \n");
    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
            scanf("%d",&arr[r][c]);
        }
    }
    printf("the second matrix: \n");
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
            sum[r][c]=arr[r][c]+mat[r][c];
        }
    }
    printf("sum of 2 matrix: \n");
    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
            printf("%d\t",sum[r][c]);
        }
        printf("\n");
    }
}
