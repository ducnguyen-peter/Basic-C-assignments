#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll power(ll a, ll b, ll m)
{
	if(b==0) return 1;
	if(b==1) return a%m;
	ll x = power(a,b/2,m)%m;
	if(b%2==0) return (x*x)%m;
	else return (((a%m)*x)%m*x)%m;
}
int main()
{
	int t; cin>>t;
	while(t--){
		string a;
		ll b, m;
		cin>>a>>b>>m;
		ll s = 0;
		for(int i = 0; i < a.size(); i++)
		{
			s = (s*10+(a[i]-'0'))%m;
		}
		cout<<power(s,b,m)<<endl;
	}
	return 0;
}
