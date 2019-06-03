#include<bits/stdc++.h>
using namespace std;
#define SIZE 200005

list<int>adj[SIZE];
int color[SIZE];

enum{NOT_VISITED,GREEN,RED};

int main(){

int T,n,u,v,i,prev_node,maxs=0,cases=1;

cin>>T;
while(T--){
cin>>n;

for(i=0;i<SIZE;i++){
    adj[i].clear();
}
memset(color,0,sizeof(color));

for(i=0;i<n;i++){
    cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);
}

maxs=0;


for(i=0;i<SIZE;i++){

    if(!adj[i].empty() && color[i]== NOT_VISITED){
        int green=0,red=0;
        queue<int>q;

        q.push(i);
        color[i]=GREEN;
        green++;

        while(!q.empty()){

            prev_node=q.front();
            q.pop();

            for(list<int>::iterator it=adj[prev_node].begin();it!=adj[prev_node].end();it++){


                if(color[*it]== NOT_VISITED){
                        q.push(*it);
                    if(color[prev_node]==GREEN){
                        color[*it]=RED;
                        red++;
                    }
                    else{
                        color[*it]=GREEN;
                        green++;
                    }
                }
            }

        }

      maxs+=max(red,green);
    }
}

printf("Case %d: %d\n",cases,maxs);
cases++;
}
return 0;
}
