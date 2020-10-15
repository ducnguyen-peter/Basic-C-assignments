#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a, ll b)
{
	if(b==0) return a;
	else return gcd(b, a%b);
}
ll solution(ll n)
{
	ll ans = 1;
	for(int i = 1; i <= n; i++)
	{
		ll x = gcd(ans,i);
		ans = ans*i/x;
	}
	return ans;
}
int main()
{
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		cout<<solution(n)<<endl;
	}
	return 0;
}

