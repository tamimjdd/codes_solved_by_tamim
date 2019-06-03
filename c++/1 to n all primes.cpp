#include<bits/stdc++.h>
using namespace std;
int prime(int n){
int i,flag=0;
for(i=2;i<=n/2;i++){
    if(n%i==0){
        flag=1;
        break;
    }
}
if(flag==0){
    cout<<n<<" ";
}
else{
    return 0;
}
}
int main(){
int n,i;
cin>>n;
for(i=2;i<=n;i++){
    prime(i);
}
}
