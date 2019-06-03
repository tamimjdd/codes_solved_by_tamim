#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
int len,flag=0,i;
len=s.size();

for( i=0;i<=len;i++){
    if(s[i]=='A' && s[i+1]=='B' && s[i+2]=='C') {cout<<"Yes"<<endl; flag=1; break;}
    else if(s[i]=='B' && s[i+1]=='A' && s[i+2]=='C') {cout<<"Yes"<<endl; flag=1; break;}
    else if(s[i]=='C' && s[i+1]=='B' && s[i+2]=='A') {cout<<"Yes"<<endl; flag=1; break;}
    else if(s[i]=='A' && s[i+1]=='C' && s[i+2]=='B') {cout<<"Yes"<<endl; flag=1; break;}
    else if(s[i]=='C' && s[i+1]=='A' && s[i+2]=='B'){ cout<<"Yes"<<endl; flag=1; break;}
    else if(s[i]=='B' && s[i+1]=='C' && s[i+2]=='A') {cout<<"Yes"<<endl; flag=1; break;}
}
if( flag==0) cout<<"No"<<endl;
}
