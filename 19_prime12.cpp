#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solution(ll n, ll k)
{
	ll dem = 0;
	while(n%2==0)
	{
		dem++;
		n/=2;
		if(dem==k)
		{
			cout<<2;
			return;
		}
	}
	for(int i = 3; i*i<=n; i+=2)
	{
		while(n%i==0)
		{
			dem++;
			if(dem==k)
			{
				cout<<i;
				return;
			}
			n/=i;
		}
	}
	if(n>1) 
	{
		dem++;
		if(dem==k) 
		{
			cout<<n;
			return;
		}
	}
	if(k>dem) 
	{
		cout<<-1;
		return;
	}
}
int main()
{
	int t; cin>>t;
	while(t--){
		ll n,k; cin>>n>>k;
		solution(n,k);
		cout<<endl;
	}
	return 0;
}

