#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
ll solution(ll n, ll x, ll a[])
{
	ll res = a[0]%mod;
	for(int i = 1; i < n; i++)
	{
		res = (((res%mod)*x)%mod + a[i]%mod)%mod;
	}
	return res;
}
int main()
{
	int t; cin>>t;
	while(t--){
		ll n, x;
		cin>>n>>x;
		ll a[n];
		for(ll i = 0; i < n; i++) cin>>a[i];
		cout<<solution(n,x,a)<<endl;
	}
	return 0;
}

