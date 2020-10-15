#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
/*void solution(ll n)
{
	ll dem=0;
	if(n==1)
	{
		cout<<1<<endl;
		return;
	}
	for(int i = 1; i*i <= n; i+=2)
	{
		if(n%i==0)
		{
			dem++;
			if(n/i<=n&&(n/i)%2==1) dem++;
		}
	}
	cout<<dem<<endl;
}*/
ll solution(ll n)
{
	ll res = 0;
	for(ll i = 1; i<=n; i++)
	{
		ll dem = 0;
		for(ll j = 1; j<=i; j++)
		{
			if(i%j==0) dem++;
		}
		if(dem%2) res++;
	}
	return res;
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

