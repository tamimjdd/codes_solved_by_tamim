#include<bits/stdc++.h>
using namespace std;

long long int AbsDiff(int a[], int n)
{

  sort(a,a+n);
  long long int sum = 0;
  int i;
  for(i=n-1;i>=0;i--)
  {
    sum += (a[i]*(i) - a[i]*(n-i-1));
  }
  return sum;
}
int main(){

int n;
cin>>n;
int arr[n+1];

for(int i=0;i<n;i++){
    cin>>arr[i];
}

cout<<AbsDiff(arr,n);

return 0;
}
