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
int main()
{
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		for(ll i = 2; i < n; i++)
		{
			if(isprime(i)&&isprime(n-i)){
				cout<<i<<" "<<n-i;
				break;
			}
		}
		cout<<endl;
	}
	return 0;
}

