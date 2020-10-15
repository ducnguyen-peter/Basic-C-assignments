#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll solution(ll a[], ll n)
{
	sort(a, a+n);
	ll b[a[n-1]+1];
	for(int i = 1; i <= a[n-1] + 1; i++) 
		b[i] = 0;
	for(ll i = 0; i < n; i++) 
		if(a[i]>0) b[a[i]] = a[i];
	for(int i = 1; i <= a[n-1] + 1; i++)
		if(b[i]==0) return i;
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

