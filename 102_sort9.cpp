#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll solution(ll a[], ll n, ll k)
{
	sort(a, a+n);
	ll lim = n-1;
	while(a[lim]>k) 
	{
		lim--;
		if(lim<0) return 0;
	}
	ll dem = 0;
	for(ll i = 0; i <= lim; i++)
	{
		for(ll j = i+1; j <= lim; j++)
		{
			if(a[i]+a[j]==k) dem++;
		}
	}
	return dem;
}
int main()
{
	/*int t; cin>>t;
	while(t--){
		/*ll n, k; cin>>n>>k;
		ll a[n];
		for(ll i = 0; i < n; i++) cin>>a[i];
		cout<<solution(a, n, k)<<endl;
	}*/
	cout<<10+9*2+7.5*2+7*5<<endl;
	return 0;
}

