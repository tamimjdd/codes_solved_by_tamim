#include<bits/stdc++.h>
using namespace std;

int checkif(int arr[],int sizes){
    int arr2[sizes+1];
for(int i=1;i<=sizes;i++){
arr2[arr[i]]=i;
}
int flag=0;
for(int i=1;i<=sizes;i++){
    if(arr[i]!=arr2[i]){

        flag=1;
        break;
    }
}
if(flag==1) return 0;
else return 1;
}


int main(){
int T,i,N;

while(cin>>N){
    if(N==0) return 0;
    int arr[N+1];
    for(i=1;i<=N;i++){
        cin>>arr[i];
    }
    if(checkif(arr,N)==1){
        cout<<"ambiguous"<<endl;
    }
    else{
        cout<<"not ambiguous"<<endl;
    }
}
}
