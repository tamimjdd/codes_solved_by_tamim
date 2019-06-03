#include<bits/stdc++.h>
int knapSack(int W, int wt[], int val[], int n)
{
    int w,i,v[100][100];
for( w=0;w<=W;w++){
     v[0][w]=0;
}
for( i=0;i<=n;i++){
v[i][0]=0;
}
 for(i=1;i<=n;i++){
     for(w=0;w<=W;w++){
        if(wt[i-1]<=w){
            if(val[i-1]+v[i-1][w-wt[i-1]]>v[i-1][w]){
            v[i][w]=val[i-1]+v[i-1][w-wt[i-1]];
        }
            else{
            v[i][w]=v[i-1][w];
        }
     }
     else{
     v[i][w]=v[i-1][w];
     }
}
}
return v[n][W];
}


int main()
{
    int val[] = {60, 100, 120};
    int wt[] = {10, 20, 30};
    int  W = 50;
    //int n = sizeof(val)/sizeof(val[0]);
    int n=3;
    printf("%d",knapSack(W, wt, val, n));
    return 0;
}
