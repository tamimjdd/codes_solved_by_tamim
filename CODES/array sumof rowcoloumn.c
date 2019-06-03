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
        s=0;
        for(c=0;c<3;c++)
        {
            s=s+arr[r][c];
        }
        printf("\nsum of row %d = %d\n",r+1,s);
    }
    for(r=0;r<3;r++)
    {
        s=0;
        for(c=0;c<3;c++)
        {
            s=s+arr[c][r];
        }
        printf("\nsum of coloumn %d = %d\n",r+1,s);
    }
}
