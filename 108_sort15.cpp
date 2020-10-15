#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll solution(ll a[], ll n, ll k)
{
	sort(a, a+n);
	ll res = 0;
	for(ll i = n - 1; i > 0; i--)
	{
		ll tmp = upper_bound(a,a+n,a[i]-k)-a;
		if(a[tmp]+k==a[i]) tmp++;
		tmp = i-tmp;
		if(tmp>0) res+=tmp;
	}
	return res;
}
int main()
{
	int t; cin>>t;
	while(t--){
		ll n, k; cin>>n>>k;
		ll a[n];
		for(ll i = 0 ; i < n; i++) cin>>a[i];
		cout<<solution(a, n, k)<<endl;
	}
	return 0;
}

