#include<bits/stdc++.h>
using namespace std;
int main(){
int T,A,B;

ios_base::sync_with_stdio (false);

cin>>T;

if(T>1000) return 0;

while(T--){
    cin>>A>>B;
    if(A>100 || B>100) return 0;

    if(A>B){
    cout<<"Argentina "<<A<<" - "<<B<<" Brazil"<<endl;
    }
    else{
    cout<<"Brazil "<<B<<" - "<<A<<" Argentina"<<endl;
    }
}
}
