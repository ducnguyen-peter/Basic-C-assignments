#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a, ll b)
{
	if(b==0) return a;
	else return gcd(b, a%b);
}
void solution(ll a,ll x,ll y)
{
	for(ll i = gcd(x,y); i>=1; i--)
	{
		cout<<a;
	}
	cout<<endl;
}
int main()
{
	int t; cin>>t;
	while(t--){
		ll a, x, y;
		cin>>a>>x>>y;
		solution(a,x,y);
	}
	return 0;
}

