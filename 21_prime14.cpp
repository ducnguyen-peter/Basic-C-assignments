#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll isprime(ll n)
{
	if(n<2) return 0;
	if(n==2) return 1;
	ll dem = 0;
	for(int i = 2; i*i<=n; i++)
	{
		if(n%i==0) dem++;
	}
	return dem==0;
}
ll dem_uoc(ll n)
{
	ll dem = 0;
	if(n==1) return 1;
	for(ll i = 1; i*i<=n; i++)
	{
		if(n%i==0)
		{
			dem++;
			if(n/i!=i) dem++;
		}
	}
	return dem;
}
void solution(ll n)
{
	for(int i = 1; i<=n; i++)
	{
		if(dem_uoc(i)==3) cout<<i<<" ";
	}
	cout<<endl;
}
void solution1(ll n)
{
	for(int i = 2; i*i<=n; i++)
	{
		if(isprime(i)) cout<<i*i<<" ";
	}
	cout<<endl;
}
int main()
{
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		solution1(n);
//		cout<<dem_uoc(4);
	}
	return 0;
}

