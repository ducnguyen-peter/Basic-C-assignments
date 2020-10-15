#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll no(ll a[], ll n)
{
	ll ans = 0;
	for(ll j = 1; j < n; j++)
		for(ll i = 0; i < j; i++)
			if(a[i]<a[j]) ans = max(ans, j-i);
	return ans;
}
ll yes(ll a[], ll n)
{
	ll ans, i, j;
	ll Lmin[n];
	ll Rmax[n];
	Lmin[0] = a[0];
	for(i = 1; i < n; i++) Lmin[i] = min(a[i], Lmin[i-1]);
	Rmax[n-1] = a[n-1];
	for(i = n - 2; i >= 0; i--) Rmax[i] = max(a[i], Rmax[i+1]);
	i = 0, j = 0, ans = -1;
	while(j<n&&i<n)
	{
		if(Lmin[i]<Rmax[j])
		{
			ans = max(ans, j-i);
			j++;
		}
		else i++;
	}
	return ans;
}
int main()
{
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		ll a[n];
		for(int i = 0; i < n; i++) cin>>a[i];
		cout<<yes(a,n)<<endl;
	}
	return 0;
}

