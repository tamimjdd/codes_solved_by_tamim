#include<bits/stdc++.h>
using namespace std;
int main(){
char s[101];
int n;
cin>>n;
if(n>100 || n<2) return 1;
else
for(int i=0;i<n;i++){
    cin>>s[i];
}
if(s[0]=='S' && s[n-1]=='F'){
    cout<<"Yes"<<endl;
}
else{
    cout<<"No"<<endl;
}
}
