#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solution(ll a[], ll n, ll k)
{
	a[0]=a[1]+10;
	ll x=a[1];
	for(ll i=1;i+k-1<=n;i++){
		if(a[i-1]<x){
			x=max(x,a[i+k-1]);
			cout<<x<<" ";
		}
		else{
			x=a[i];
			for(ll j=i+1;j<i+k;j++){
				x=max(x,a[j]);
			}
			cout<<x<<" ";
		}
	}
	cout<<endl;
}
int main()
{
	int t; cin>>t;
	while(t--){
		ll n, k; cin>>n>>k;
		ll a[n+1];
		for(int i = 1; i <= n; i++) cin>>a[i];
		solution(a,n,k);
	}
	return 0;
}

