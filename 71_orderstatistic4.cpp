#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll *d, visited[100000];
ll maxsum(ll a[], ll n)
{
	ll incl = a[0], excl = 0, exclnew;
	for(ll i = 1; i < n; i++)
	{
		exclnew = max(incl, excl);
		incl = excl+a[i];
		excl = exclnew;
	}
	return max(incl, excl);
}
ll maxsumdp(ll a[], ll i, ll n)
{
	if(i>=n) return 0;
	if(visited[i]) return d[i];
	visited[i] = 1;
	d[i] = max(maxsumdp(a, i + 1, n), a[i] + maxsumdp(a, i + 2, n));
	return d[i];
}
int main()
{
	ll t; cin>>t;
	while(t--){
		ll n; cin>>n;
		ll a[n];
		d = new ll [n];
		memset(d,0,sizeof(d));
		memset(visited,0,sizeof(visited));
		for(ll i = 0; i < n; i++) cin>>a[i];
		cout<<maxsum(a, n)<<endl;		
	}
	return 0;
}

