#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solution(ll n, ll a[])
{
	sort(a, a+n);
	ll d = a[n-1]-a[0];
	vector<ll> v;
	for(ll i = 1; i*i<= d; i++)
	{
		if(d%i==0)
		{
			v.push_back(i);
			if(d/i!=i) v.push_back(d/i);
		}
	}
	ll dem = 0;
	for(ll i = 0; i < v.size(); i++)
	{
		ll tmp = a[0]%v[i];
		ll j = 1, kt = 1;
		for(; j<n; j++)
		{
			if(a[j]%v[i]!=tmp) 
			{
				kt = 0;
				break;
			}
		}
		if(kt==1) dem++;
	}
	cout<<dem<<endl;
}
int main()
{
	int t; cin>>t;
	while(t--){
		ll n, a[100005];
		cin>>n;
		for(ll i = 0; i<n; i++) cin>>a[i];
		solution(n,a);
	}
	return 0;
}

