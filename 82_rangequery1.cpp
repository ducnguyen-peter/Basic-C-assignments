#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int t; cin>>t;
	while(t--){
		ll n, q, l, r; cin>>n>>q;
		ll a[n+5];
		for(ll i = 1; i <= n; i++) cin>>a[i];
		while(q--)
		{
			cin>>l>>r;
			ll sum = 0;
			for(ll i = l; i <= r; i++)
				sum+=a[i];
			cout<<sum<<endl;
		}
	}
	return 0;
}

