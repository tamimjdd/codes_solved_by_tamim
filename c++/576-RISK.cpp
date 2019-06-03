#include<bits/stdc++.h>
using namespace std;

#define infinity 999999
#define MAX 100
void dijkstra(int g[MAX][MAX],int v,int startnode,int destinatoin){
int cost[MAX][MAX],prev[MAX],dist[MAX],visited[MAX],i,count,j,minidist,nextnode;
for(i=0;i<v;i++){//setting all visited nodes to zero
    visited[i]=0;
}

visited[startnode]=1;//source node is always visited

count=1;

for(i=0;i<v;i++){//setting cost where 0=infinity
    for(j=0;j<v;j++){
        if(g[i][j]==0)
            cost[i][j]=infinity;
            else
                cost[i][j]=g[i][j];
    }
}

for(i=0;i<v;i++){
    dist[i]=cost[startnode][i];
    prev[i]=startnode;
}

while(count<v-1){
    minidist=infinity;

    for(i=0;i<v;i++){
        if(minidist>dist[i]&& !visited[i]){
            minidist=dist[i];
            nextnode=i;
        }
    }

    visited[nextnode]=1;

    for(i=0;i<v;i++){
        if(!visited[i]){
    if(minidist+cost[nextnode][i]<dist[i]){
        dist[i]=minidist+cost[nextnode][i];
        prev[i]=nextnode;
    }
}
}

count++;
}



cout<<dist[destinatoin]<<endl;

}

int arr[MAX][MAX];
int main(){
    freopen("D://input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int X,Y,N,edge1,edge2;
    for(int i=1;i<=19;i++){
    scanf("%d",&X);

    for(int j=1;j<=X;j++){
        scanf("%d",&Y);
    arr[X][Y]=1;
    }

    }
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        scanf("%d%d",&edge1,&edge2);
        dijkstra(arr,20,edge1,edge2);
    }

}
