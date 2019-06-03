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
    for(r=0;r<3;r++)
    {
        c=r;
        t=arr[r][c];
        arr[r][c]=arr[r][(3-c)-1];
        arr[r][(3-c)-1]=t;
    }
    printf("after diagonal interchange: \n");
    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
            printf("%d\t",arr[r][c]);
        }
        printf("\n");
    }
}
