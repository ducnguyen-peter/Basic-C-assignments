#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll solution(ll n, ll r, ll b, ll g)
{
	ll fact[n+1];
	fact[0] = 1;
	for(ll i = 1; i <= n; i++) fact[i] = fact[i-1]*i;
	ll remain = n - (r+g+b);
	ll sum = 0;
	for(ll i = 0; i <= remain; i++)
	{
		for(ll j = 0; j <= remain - i; j++)
		{
			ll k = remain - (i+j);
			sum = sum + fact[n]/(fact[i+r]*fact[j+b]*fact[k+g]);		
		}
	}
	return sum;
}
int main()
{
	ll t; cin>>t;
	while(t--){
		ll n, r, b, g;
		cin>>n>>r>>b>>g;
		cout<<solution(n, r, b, g)<<endl;
	}
	return 0;
}

