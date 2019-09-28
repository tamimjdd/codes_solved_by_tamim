#include<bits/stdc++.h>
using namespace std;
struct name{
    int x,y,z,p,m=0;
}arr[51];

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr2[n+1],arr3[n+1];
        memset(arr3,0,sizeof(arr3));
        vector<vector<int>>v;
        int nval=n;
        while(n--){
            int id,s,tp,x,saq;
            cin>>id>>s>>tp>>saq;
            arr[id].y+=saq;
            arr[id].p=saq;
            for(int i=0;i<saq;i++){
                cin>>x;
                arr[id].z+=x;
                v[id].push_back(x);
            }
        }
        for(int i=0;i<nval;i++){
            cin>>arr2[i];
        }

        for(int i=1;i<=nval;i++){
            while(arr[arr2[i]].y>=arr[arr2[i-1]].y){
                arr[arr2[i]].y--;
                arr[arr2[i]].m++;
            }
        }

        for(int i=0;i<nval;i++){
            if(arr[i].y==arr[i+1].y){
                arr3[i]=1;
                arr3[i+1]=1;
            }
        }
        vector<vector<int>>::iterator it;
        for(int i=0;i<nval;i++){
            if(arr3[i]==1){
                for(it=v[arr3[i]].end();it!=v[arr3[i]].begin();it--){
                       if(arr[arr3[i]].m>0){
                        arr[arr3[i]].z-=v[arr3[i]][i];
                       }
                }
            }
        }




    }
    return 0;
}
