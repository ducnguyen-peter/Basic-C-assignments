#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool isprime(ll n)
{
	if(n<2) return 0;
	if(n==2) return 1;
	ll dem = 0;
	for(ll i = 2; i*i<=n; i++)
	{
		if(n%i==0) dem++;
	}
	return dem==0;
}
ll smallestprime(ll n)
{
	if(n==1) return 1;
	if(n%2==0) return 2;
	if(isprime(n)) return n;
	for(int i = 3; i*i<=n; i+=2)
	{
		if(n%i==0) return i;
	}
}
int main()
{
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		for(ll i = 1; i <= n; i++)
		{
			cout<<smallestprime(i)<<" ";
		}
		cout<<endl;
	}
	return 0;
}

