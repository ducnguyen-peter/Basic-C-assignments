#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll solution(ll a[], ll n, ll x)
{
	ll s = 0, ans = n+1;
	ll start = 0, end = 0;
	while(end<n)
	{
		while(s<=2*x && end<n)
		{
			s += a[end];
			end++;
		}
		while(s>2*x && start<n)
		{
			if(end-start<ans) ans = end-start;
			s -= a[start];
			start++;
		}
	}
	if(ans==n+1) return -1;
	return ans;
}
int main()
{
	int t; cin>>t;
	while(t--){
		ll n, x; cin>>n>>x;
		ll a[n+1];
		for(int i = 0; i < n; i++) cin>>a[i];
		cout<<solution(a,n,x)<<endl;
	}
	return 0;
}

