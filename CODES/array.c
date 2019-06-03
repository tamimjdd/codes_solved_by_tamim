#include<stdio.h>
void main()
{
    double m[2][5];
    int c,r;
    for(c=0;c<2;c++)
    {
        for(r=0;r<5;r++)
        {
            scanf("%lf",&m[c][r]);
        }
    }
    for(c=0;c<2;c++)
    {
        for(r=0;r<5;r++)
        {
            printf("class %d, roll %d, marks %lf\n",c+6,r+1,m[c][r]);
        }
    }
}
