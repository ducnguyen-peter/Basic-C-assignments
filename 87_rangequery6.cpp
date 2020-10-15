#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		ll a[n], d[n];
		memset(d,0,sizeof(d));
		for(ll i = 0; i < n; i++) 
		{
			cin>>a[i];
			d[i] = a[i];
		}
		for(ll i = 0; i < n; i++)
		{
			for(ll j = 0; j < i; j++)
			{
				if(a[j]<a[i] && d[i]<d[j]+a[i]) d[i] = d[j] + a[i];
			}
		}
		cout<<*max_element(d, d+n)<<endl;
	}
	return 0;
}

