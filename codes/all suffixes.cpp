#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
int n=s.size();
int count[n+10],aux[n+10];
memset(count,0,sizeof(count));


for(int i=0;i<n;i++){
    count[s[i]+1]++;
    cout<<count[s[i]+1]<<" ";
}
cout<<endl;

for(int r=0;r<n;r++){
    count[r+1]+=count[r];
}

for(int i=0;i<n;i++){
    aux[count[s[i]]++]=s[i];
}

for(int i=0;i<n;i++){
    s[i]=aux[i];
}

return 0;
}
