#include<bits/stdc++.h>
using namespace std;
int a[10005];
int main(){
int n,i,j,ans=0;
scanf("%d",&n);
memset(a,0,sizeof(a));
for(i=2;i<=n;i++){
    if(!a[i]){
        for(j=i;j<=n;j+=i){
            a[j]++;
                   }

    }
    if(a[i]==2)ans++;
}
printf("%d\n",ans);
return 0;

}
