#include<stdio.h>
void main()
{
    int arr[3][3],r,c,s=0;
    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
            scanf("%d",&arr[r][c]);
        }
    }
    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
            if(r+c==((3+1)-2))
            {
                s=s+arr[r][c];
            }
        }
    }
    printf("\nsum of minor diagonal of matrix %d\n",s);
}
