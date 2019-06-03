#include<bits/stdc++.h>
using namespace std;
long long int tos=0;
long long int stacks[100000];
void push(int i){
if(tos==100000) cout<<"the stack is full\n";
else
    stacks[tos]=i;
tos++;
}

void pop(){
    int dup;
if(tos==-1) cout<<"the stack is empty";
else
    tos--;
}
int main(){
    long long int cases,value,i,j,cases2,prev_value[10000000],value2=0;
    cin>>cases2;
    i=0;
    while(cases2--){
    cin>>cases;
    if(cases==1){
            cin>>value;
        i++;
      push(value);
        if(value>value2){
            value2=value;
            prev_value[i]=value;
        }
    }
    else if(cases==2){
            if(stacks[tos-1]==prev_value[i]){
                i--;
            }
        pop();
    }
    else{

            cout<<prev_value[i]<<endl;
    }
    }
}
