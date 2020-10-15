#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void result(ll a[], ll n)
{
	for(ll i = 0; i < n; i++) cout<<a[i]<<" ";
	cout<<endl;
}
void solution(ll a[], ll n)
{
	ll b[n];
	for(ll i = 0; i < n; i++) b[i]=-1;
	for(ll i = 0 ; i < n; i++)
	{
		if(0<=a[i] && a[i]<n)
			b[a[i]]=a[i];
	}
	result(b,n);
}
int main()
{
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		ll a[n];
		for(ll i = 0; i < n; i++) cin>>a[i];
		solution(a, n);
	}
	return 0;
}

