#include<stdio.h>
void main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    switch((a>=b)&&(a>=c))
    {
    case 1:
        printf("%d is bigger",a);
        {
            switch((b>=a)&&(b>=c))
            {
            case 2:
                printf("%d is bigger",b);
            }
        }
            default:
                printf("%d is bigger",c);
    }
}
