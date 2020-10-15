#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll solution(ll a[], ll n)
{
	ll ans;
	ll tmp = INT_MAX;
	for(int i = 0 ; i< n; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			if(tmp>abs(a[i]+a[j]))
			{
				tmp = abs(a[i]+a[j]);
				ans = a[i]+a[j];
			}
		}
	}
	return ans;
}
int main()
{
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		ll a[n];
		for(ll i = 0; i < n; i++) cin>>a[i];
		cout<<solution(a, n)<<endl;
	}
	return 0;
}

