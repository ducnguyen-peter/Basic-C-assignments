#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string ismountain(ll a[], ll l, ll r)
{
	string kt = "Yes"; 
	ll i = l;
	while(i<=r && a[i]<=a[i+1]) 
		i++;
	if(i==r) return kt;
	else 
	{
		while(i<r)
		{
			if(a[i]<a[i+1]){
				kt = "No"; break;
			}
			i++;
		}
	}
	return kt;
}
int main()
{
	int t; cin>>t;
	while(t--){
		ll n, l, r; cin>>n;
		ll a[n+5];
		for(ll i = 0; i < n; i++) cin>>a[i];
		cin>>l>>r;
		cout<<ismountain(a, l, r)<<endl;
	}
	return 0;
}

