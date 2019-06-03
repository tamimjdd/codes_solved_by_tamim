#include<bits/stdc++.h>
using namespace std;
int main(){
long long int n,m,i;
cin>>n>>m;
long long int arr[m],arr2[m],arr3[m],save;
for(i=0;i<m;i++){
    cin>>arr[i]>>arr2[i];
}
int k=0;
for(i=0;i<m;i++){
        if(i==0){
    arr3[k]=arr[i];
    k++;
    arr3[k]=arr2[i];
    k++;
    save=arr2[i];
        }
        else{
         if(save==arr[i]){
            arr3[k]=arr2[i];
            save=arr2[i];
            k++;
         }
        }
}
for(i=0;i<k;i++){
        cout<<k<<endl;
    cout<<arr3[i]<<" ";
}
cout<<endl;
}
