#include<bits/stdc++.h>
using namespace std;
int stacks[100000],tos=0;

int push(int s){
stacks[tos]=s;
tos++;
}

int pop(){
tos--;
}

int main(){
int n;
while(cin>>n){
    if(n==0) return 1;
    long long int x,sum=0;

    for(int i=1;i<=n;i++){
        cin>>x;

        if(i>=2){
        push(sum+x);
        sum+=x;
        }
        else{
            sum+=x;
        }

    }
    long long int sum2=0;
    for(int i=0;i<tos;i++){
        sum2+=stacks[i];
    }
    cout<<sum2<<endl;
        memset(stacks,0,sizeof(stacks));
}
}
