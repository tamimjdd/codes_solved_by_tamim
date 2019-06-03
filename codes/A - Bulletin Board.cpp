#include<bits/stdc++.h>
using namespace std;
int main(){
int N,A,B;
  cin>>N>>A>>B;
  int arr[N+1],countA=0,countB=0,countC=0;

  for(int i=0;i<N;i++){
    cin>>arr[i];
    if(arr[i]<=A){
        countA++;
    }
    else if(arr[i]>A && arr[i]<=B){
        countB++;
    }
    else if(arr[i]>B){
        countC++;
    }
  }
int contest=N/3;

int arr1[3];
  arr1[0]=countA;
  arr1[1]=countB;
  arr1[2]=countC;
  sort(arr1,arr1+3);
  if(contest> arr1[0]){
    cout<<arr1[0]<<endl;
  }
  else if(contest<arr1[0]){
    cout<<contest<<endl;
  }
  else{
    cout<<contest<<endl;
  }

return 0;
}
