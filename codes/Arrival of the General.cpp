#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n+1],i,arr2[n+1];
vector<pair<int,int>>sorted;
int big=0,small=1000;

for(i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]>big){
        big=arr[i];
    }
    if(arr[i]<small){
        small=arr[i];
    }
}
int bindx,sindx;
for(i=n;i>=0;i--){
    if(arr[i]==big){
        bindx=i+1;
    }
}

for(i=0;i<n;i++){
    if(arr[i]==small){
        sindx=i+1;
    }
}
if(bindx>sindx){
int count=0;
for(int i=bindx;i>1;i--){
    count++;
}

for(int i=sindx;i<n-1;i++){
    count++;
}
cout<<count<<endl;
}
else{
        int count=0;
 for(int i=bindx;i>1;i--){
    count++;
}
for(int i=sindx;i<n;i++){
    count++;
}
cout<<count<<endl;
}
return 0;
}
