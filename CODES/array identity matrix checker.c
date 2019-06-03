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
            if(r==c&&arr[r][c]!=1)
            {
                s=0;
            }
            else if(r!=c&&arr[r][c]!=0)
            {
                s=0;
            }
        }
    }
    if(s==1)
    {
        printf("its an indity matrix. \n");
    }
    else
    {
        printf("its not an identity matrix. \n");
    }
}
