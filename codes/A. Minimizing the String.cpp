#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,i;
cin>>n;
string a;
//string b;
cin>>a;
for(i=0;i<n-1;i++)
{
if(a[i]>a[i+1])
break;
}
cout<<a.substr(0,i)<<a.substr(i+1,n-i);
return 0;
}
