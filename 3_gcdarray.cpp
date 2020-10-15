#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
ll power(ll a, ll b) {
    if (b == 0) return 1;
    ll x = power(a, b/2);
    x = x*x % mod;
    if (b % 2) x = x*a % mod;
    return x;
}
ll gcd(ll a, ll b)
{
	if(b==0) return a;
	else return gcd(b, a%b);
}
ll sol(ll a[], ll n)
{
	ll hx = a[0];
	ll gx = a[0];
	for(int i = 1; i < n; i++)
	{
		hx=(hx*a[i])%mod;
		gx = gcd(gx, a[i]);
	}
	ll result = power(hx,gx);
	return result%mod;
}
int main()
{
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		ll a[n];
		for(ll i = 0; i < n; i++) cin>>a[i];
//		cout<<gcd(a[0],a[1])<<endl;
		cout<<sol(a,n)<<endl;
	}
	return 0;
}

