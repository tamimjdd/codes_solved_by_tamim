#include <bits/stdc++.h>

using namespace std;
#define inf (ll)1e18
#define ll long long
#define Mod 1000000007


ll m[205][205]={0};
ll M[205][205]={0};

vector <ll> num;
vector <char> op;

void minmax(ll i,ll j) {
	ll mx=(-1)*inf;
	ll mn=inf;
	for(ll k=i;k<j;k++) {
		if(op[k]=='+') {
			ll a=m[i][k]+M[k+1][j];
			ll b=m[i][k]+m[k+1][j];
			ll c=M[i][k]+M[k+1][j];
			ll d=M[i][k]+m[k+1][j];
			mn=min(mn,min(a,min(b,min(c,d))));
			mx=max(mx,max(a,max(b,max(c,d))));
		}
		else {
			ll a=m[i][k]-M[k+1][j];
			ll b=m[i][k]-m[k+1][j];
			ll c=M[i][k]-M[k+1][j];
			ll d=M[i][k]-m[k+1][j];
			mn=min(mn,min(a,min(b,min(c,d))));
			mx=max(mx,max(a,max(b,max(c,d))));
		}
	}
	m[i][j]=mn;
	M[i][j]=mx;
}



int main() {
	cout<<fixed;
	cout<<setprecision(9);
	#ifndef ONLINE_JUDGE
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	#endif
	ll t;
	cin>>t;
	while(t--) {
		memset(M,0,sizeof(M));
		memset(m,0,sizeof(m));
		num.clear();
		op.clear();
		ll x;
		char y;
		ll n;
		cin>>n;
		for(ll i=0;i<n;i++) {
			if(i==n-1) {
				cin>>x;
				num.push_back(x);
				break;
			}

			cin>>x>>y;
			num.push_back(x);
			op.push_back(y);
		}

		for(ll i=0;i<n;i++) {
			for(ll j=0;j<n-i;j++) {
				if(i==0) {
					m[j][j]=num[j];
					M[j][j]=num[j];
					continue;
				}
		 			minmax(j,j+i);
		k	}
		}

		cout<<M[0][n-1]<<endl;
	}
	return 0;
}
