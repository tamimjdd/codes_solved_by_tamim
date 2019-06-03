/*#include<bits/stdc++.h>
using namespace std;
long long int fact(long long int x){
if(x==1) return 1;
else return x*(x-1);
}
int main(){
        long long int N,counts=0;
        cin>>N;
        long long int arr[N],flag[N],max=100000;
        memset(flag,0,sizeof(flag));
        for(int i=1;i<=N;i++){
            cin>>arr[i];
            if(arr[i]%3==0){
                flag[i]=1;
            }

        }
        int flag2=0,counts2=0,three=0;
        for(int l=1;l<=N;l++){
            if(arr[l]%3==0){
                counts2++;
            }
        }
        three=fact(counts2)/2;

        for(int j=1;j<=N;j++){
            for(int k=j+1;k<=N;k++){
                    if(flag[k]==0){
                if((arr[j]+arr[k])%3==0){
                    counts++;
                }
                    }
            }
        }

        cout<<counts+three<<endl;
}*/
//editorial->

#include <iostream>
using namespace std;

int n;
long long freq[3];

int main() {
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        freq[val % 3] += 1;
        cout<<val%3<<" ";
        cout<<freq[val%3]<<endl;
    }

    cout << freq[0] * (freq[0] - 1) / 2 + freq[1] * freq[2] << "\n";
}
