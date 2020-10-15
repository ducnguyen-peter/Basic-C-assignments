#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
ll Tohop(ll n, ll r)
{
	ll f[r+1];
	memset(f,0,sizeof f);
	f[0] = 1;
	for(ll i = 0; i <= n; i++)
	{
		for(ll j = min(i,r); j>0; j--)
		{
			f[j] = (f[j]%mod+f[j-1]%mod)%mod;
		}
	}
	return f[r];
}
int main()
{
	int t; cin>>t;
	while(t--){
		ll n, r;
		cin>>n>>r;
		cout<<Tohop(n,r)<<endl;
	}
	return 0;
}

