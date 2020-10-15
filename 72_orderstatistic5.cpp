#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll solution(ll a[], ll n)
{
	ll ans = 0;
	for(ll i = 0; i < n; i++)
		for(ll j = 0; j < i; j++)
			ans = max(ans, a[i] - a[j]);
	if(ans>0) return ans;
	return -1;
}
int main()
{
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		ll a[n];
		for(int i = 0; i < n; i++) cin>>a[i];
		cout<<solution(a,n)<<endl;
	}
	return 0;
}

