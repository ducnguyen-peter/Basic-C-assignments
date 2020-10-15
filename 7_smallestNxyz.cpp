#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll GCD(ll a, ll b)
{
	if(b==0) return a;
	else return GCD(b,a%b);
}
ll lcmxyz(ll x, ll y, ll z, ll n)
{
//	ll lcm = x*y*z/GCD(x,GCD(y,z));
	ll low = 1, high = 9;
	for(ll i = 0; i < n-1; i++)
	{
		low*=10;
		high = high*10+9;
	}
	x = x*y/GCD(x,y);
	ll lcm = x*z/GCD(x,z);
	if(low%lcm==0) return low;
	else{
		ll m = 1 + (low/lcm);
		if(m*lcm>high) return -1;
		else return m*lcm;
	}
}
int main()
{
	int t; cin>>t;
	while(t--){
		ll x, y, z, n;
		cin>>x>>y>>z>>n;
		cout<<lcmxyz(x,y,z,n)<<endl;
	}
	return 0;
}
