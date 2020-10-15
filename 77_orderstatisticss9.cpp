#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll d[1005];
ll solution(ll a[], ll n)
{
	for(ll i = 0; i < n; i++)
	{
		d[i] = 0;
		for(ll j = i-1; j >= 0; j--) if(a[j]<a[i]) d[i] = max(d[i], d[j]);
		d[i]++;
	}
	return *max_element(d, d + n);
}
int main()
{
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		ll a[n+1];
		for(int i = 0; i < n; i++) cin>>a[i];
		cout<<solution(a, n)<<endl;
	}
	return 0;
}

