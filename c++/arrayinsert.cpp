#include<bits/stdc++.h>
using namespace std;



void update(long long int x,long long int n,long long int arr[],long long int num){
for(int i=x;i<n;i++){
    arr[i]=arr[i]+num;
}

}
void update2(long long int x,long long int n,long long int arr[],long long int num){
for(int i=x;i<n;i++){
    arr[i]=arr[i]-num;
}
}
int main(){
long long int N,Q,X,Y,L,R,num;
cin>>N>>Q;
long long int arr[N],sumarr[N];
for(int i=0;i<N;i++){
    cin>>arr[i];
    if(i==0){
        sumarr[i]=arr[i];
    }
    else{
        sumarr[i]=sumarr[i-1]+arr[i];
    }
}
for(int j=0;j<Q;j++){
    cin>>num;
    if(num==1){
        cin>>X>>Y;
        if(Y>arr[X]){
            update(X,N,sumarr,Y-arr[X]);
        }
        else if(Y<arr[X]){
            update2(X,N,sumarr,arr[X]-Y);
        }
arr[X]=Y;
    }
    else{
        cin>>L>>R;
        if(L==0){
            cout<<sumarr[R]<<endl;
        }
        else if(L>0){
            cout<<sumarr[R]-sumarr[L-1]<<endl;
        }

    }
}
}
