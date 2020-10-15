#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
main()
{
	ll t; cin>>t;
	while(t--)
	{
		ll n; cin>>n;
		vector<bool> a;
		ll m = sqrt(n);
		for(ll i = 0; i<=m; i++) a.push_back(0);
		a[0] = 1; a[1] = 1;
		for(ll i = 2; i<=m; i++)
		{
			if(a[i]==0)
			for(ll j = i*i; j<=m; j+=i)
			a[j]=1;
		}
		ll dem = 0;
		for(ll i = 2; i*i<=n; i++)
		{
			if(a[i]==0) dem++;
		}
		cout<<dem<<endl;
	}
}
