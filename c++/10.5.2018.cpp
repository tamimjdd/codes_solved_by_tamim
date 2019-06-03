/*LIGHTOJ-1014*/

#include<bits/stdc++.h>
using namespace std;



bool func(string s,long long int i){
int length=s.size();
long long int a;
a=0;
for(int j=0;j<length;j++)
    {
        a=(a*10)+(s[j]-'0');
        a=a%i;
    }
    if(a==0)return true;
    else return false;
}




int main(){
long long int N,i,T,P,L,cases=1;
string s;
cin>>T;
while(T--){
        cin>>P>>L;
        long long int ver=P-L;
        ostringstream temp;  //temp as in temporary
        temp<<(P-L);
         s=temp.str();
        long long int arr[100000],j,flag;
        flag=0;
        j=0;

        if(L==0){
            L++;
        }


for(i=L;i*i<=ver;i++){

     if(func(s,i)){
         if(flag==0){
            cout<<"Case "<<cases<<": ";
            cases++;
            flag=1;
         }
        printf("%lld ",i);
        j=1;
    }

}
if(j==1){
cout<<endl;
}

if(j==0){
    cout<<"Case "<<cases<<": "<<"impossible"<<endl;
    cases++;
}

}
return 0;
}
