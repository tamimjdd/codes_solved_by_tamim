#include<bits/stdc++.h>
using namespace std;
int main(){

    	freopen("D://a1.in","r",stdin);
	freopen("D://a1.out","w",stdout);
int n,t,i;
cin>>t;
while(t--){
cin>>n;
int arr[n+1],arr2[n+1],arr3[2*n];



for(int i=0;i<n;i++){
    cin>>arr[i];
}
int counts=0;
for(i=0;i<n;i++){
    if(arr[i]>counts){
        arr2[i]=counts;
        counts++;

    }
}


for( i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
}
return 0;
}

