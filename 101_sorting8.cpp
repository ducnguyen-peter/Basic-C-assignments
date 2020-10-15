#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll count(ll y[], ll m, ll d[], ll x)
{
	if(x==0) return 0;
	if(x==1) return d[0];
	ll tmp = upper_bound(y, y+m, x) - y;
	ll ans = m - tmp;
	ans += (d[0] + d[1]);
	if(x==2) ans -= (d[3]+d[4]);
	if(x==3) ans += d[2];
	return ans;
}
int main()
{
	int t; cin>>t;
	while(t--){
		ll n, m; cin>>n>>m;
		ll x[n], y[m];
		ll d[n+m] = {0};
		for(ll i = 0; i < n; i++) cin>>x[i];
		for(ll i = 0; i < m; i++)
		{
			cin>>y[i];
			if(y[i]<5) d[y[i]]++;
		}
		sort(y, y+m);
		ll ans = 0;
		for(ll i = 0; i < n; i++)
		{
			ans+=count(y, m, d, x[i]);
		}
		cout<<ans<<endl;
	}
	return 0;
}

