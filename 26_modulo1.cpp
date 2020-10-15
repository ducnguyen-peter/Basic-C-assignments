#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod(ll x, ll y, ll p)
{
	if(y==0) return 1;
	if(y==1) return x%p;
	ll a = mod(x,y/2,p)%p;
	if(y%2==0) return (a*a)%p;
	else return (((x%p)*a)%p*a)%p;
}
int main()
{
	int t; cin>>t;
	while(t--){
		ll x, y, p;
		cin>>x>>y>>p;
		cout<<mod(x,y,p)<<endl;
	}
	return 0;
}

