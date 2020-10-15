#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool isprime(ll n)
{
	if(n<2) return false;
	if(n==2) return true;
	ll dem = 0;
	for(ll i = 2; i*i<=n; i++)
	{
		if(n%i==0) dem++;
	}
	return dem==0;
}
ll sumofdigits(ll n)
{
	ll s = 0;
	while(n>0)
	{
		s+=n%10;
		n/=10;
	}
	return s;
}
bool smith(ll n)
{
	if(isprime(n)) return false;
	ll s1 = sumofdigits(n);
	ll s2 = 0;
	while(n%2==0)
	{
		s2+=2;
		n/=2;
	}
	for(ll i = 3; i*i<=n; i+=2)
	{
		while(n%i==0)
		{
			s2+=sumofdigits(i);
			n/=i;
		}
	}
	if(n>1) s2+=sumofdigits(n);
	return s1==s2;
}
int main()
{
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		if(smith(n)) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
//		smith(n);
	}
	return 0;
}

