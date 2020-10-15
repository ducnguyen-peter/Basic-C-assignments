#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll solution(ll n)
{
	if(n==1) return 1;
	while(n%2==0)
	{
		if(n/2==1)
		{
			return 2;
		}
		n/=2;
	}
	for(ll i = 3; i*i<=n; i+=2)
	{
		while(n%i==0)
		{
			if(n/i==1)
			{
				return i;
			}
			else if(n/(n/i)==1)
			{
				return n/i;
			}
			n/=i;
		}
	}
	if(n>1) return n;
}
int main()
{
	ll t; cin>>t;
	while(t--){
		ll n; cin>>n;
		cout<<solution(n)<<endl;
	}
	return 0;
}

