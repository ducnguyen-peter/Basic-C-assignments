#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a, ll b)
{
	if(b==0) return a;
	else return gcd(b,a%b);
}
void sol(ll n, ll m)
{
	ll sum = n*(n+1)/2;
	ll s1 = (sum+m)/2;
	ll s2 = s1-m;
	if(m==sum) 
	{
		cout<<"Yes"<<endl;
	}
	else if(s1+s2!=sum) 
	{
		cout<<"No"<<endl;
	}
	else if(gcd(s1,s2)==1)
	{
		cout<<"Yes"<<endl;
	}
	else cout<<"No"<<endl;
}
int main()
{
	int t; cin>>t;
	while(t--){
		ll n, m;
		cin>>n>>m;
		sol(n,m);
	}
	return 0;
}

