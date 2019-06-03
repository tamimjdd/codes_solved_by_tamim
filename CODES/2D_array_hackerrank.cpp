#include<bits/stdc++.h>
using namespace std;
int main(){
int i,j,arr[7][7],sum,sum2=-9;
for(i=0;i<6;i++){
    for(j=0;j<6;j++){
            cin>>arr[i][j];
            if(arr[i][j] <-9 || arr[i][j] >9){
            return 1;
            }
    }
}
for(i=1;i<5;i++){
        for(j=1;j<5;j++){
        sum=arr[i-1][j-1]+arr[i-1][j]+arr[i-1][j+1]+arr[i][j]+arr[i+1][j-1]+arr[i+1][j]+arr[i+1][j+1];
        if(sum>sum2){
            sum2=sum;
            sum=-9;
        }
        }
}
cout<<sum2;
    return 0;
}
