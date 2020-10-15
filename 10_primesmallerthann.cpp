#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(ll n)
{
	if(n<2) return 0;
	if(n==2) return 1;
	int dem = 0;
	for(ll i = 2; i*i<=n; i++)
	{
		if(n%i==0) dem++;
	}
	return dem==0;
}
void sol(ll n)
{
	for(int i = 2; i <= n; i++)
	{
		if(check(i)) cout<<i<<" ";
	}
}
int main()
{
	ll t; cin>>t;
	while(t--){
		ll n; cin>>n;
		sol(n);
		cout<<endl;
//		cout<<check(n)<<endl;
	}
	return 0;
}

