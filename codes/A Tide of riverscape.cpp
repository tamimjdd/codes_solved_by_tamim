#include<bits/stdc++.h>
using namespace std;
int main(){
int i,j,p,flag=0,n;
string s;
cin>>n>>p;
for(i=0;i<n;i++){
    cin>>s[i];
}
for(i=0;i<(n-p);i++){
    if(s[i]=='0' && s[i+p]=='0' || s[i]=='1' && s[i+p]=='1'){
        flag=1;

        break;
    }
    if(s[i]=='.' && s[i+p]=='.' ){

        flag=2;
        break;
    }

}
if(flag==1){
    cout<<"No"<<endl;
}
else if(flag==2){
        int bit=0;
    for(i=0;i<n;i++){

        if(s[i]=='.'){
                if(bit==0){
            s[i]='1';
        bit=1;
        }
        else{
            s[i]='0';
            bit=0;
        }
        }
    }
    for(i=0;i<n;i++){
    cout<<s[i];
  }
}
else if(flag==0){
    for(i=0;i<n;i++){
        if(s[i]=='.'){

            s[i]='0';
        }
    }

  for(i=0;i<n;i++){
    cout<<s[i];
  }
}
}
