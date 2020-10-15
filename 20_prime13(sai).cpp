#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll solution(ll n)
{
	while(n%2==0)
	{
		n/=2;
	}
	ll s = 1;
	for(ll i = 3; i*i<=n; i+=2)
	{
		if(n%i==0)
		{
			ll dem = 0;
			while(n%i==0)
			{
				dem++;
				n/=i;
			}
			s*=(dem+1);
		}
	}
	if(n>1) s*=2;
	return s;
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

