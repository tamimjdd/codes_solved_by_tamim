#include<stdio.h>
int maximum(int arr[],int start,int len);
int minimum(int arr[],int start,int len);
void main()
{
    int arr[100],x,s,max,min;
    scanf("%d",&s);
    for(x=0;x<s;x++)
    {
        scanf("%d",&arr[x]);
    }
    max=maximum(arr,0,s);
    min=minimum(arr,0,s);
    printf("\nmaximum element in array: %d \n",max);
    printf("\nminimum element in array: %d \n",min);
}
int maximum(int arr[],int start,int len)
{
    int max;
    if(start>=len-2)
    {
        if(arr[start]>arr[start+1])
            return arr[start];
        else
            return arr[start+1];
    }
    max=maximum(arr,start+1,len);
    if(arr[start]>max)
        return arr[start];
    else
        return max;
}
int minimum(int arr[],int start,int len)
{
    int min;
    if(start>=len-2)
    {
        if(arr[start]<arr[start+1])
            return arr[start];
        else
            return arr[start+1];
    }
    min=minimum(arr,start+1,len);
    if(arr[start]<min)
        return arr[start];
    else
        return min;
}
