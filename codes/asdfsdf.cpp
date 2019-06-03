#include<bits/stdc++.h>
using namespace std;
int func(int x){
int arr[]={1,2,4,8,16,32,64,128,256,512,1024,2048};
int counts=0,val,ind=11;
while(x!=0){
        if(x>=arr[ind]){
    val=x%arr[ind];

    counts=counts+(x/arr[ind]);
    x=val;
        }
        else{
            ind--;
        }

}
return counts;
}

int main(){
int T,N;
cin>>T;
while(T--){
    cin>>N;
    cout<<func(N)<<endl;
}
}

