#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void primefactors(ll n)
{
	if(n==1)
	{
		cout<<1<<endl;
		return;
	}
	while(n%2==0)
	{
		cout<<2<<" ";
		n/=2;
	}
	for(ll i = 3; i*i<=n; i+=2)
	{
		while(n%i==0)
		{
			cout<<i<<" ";
			n/=i;
		}
	}
	if(n>1) cout<<n<<" ";
	cout<<endl;
}
int main()
{
	ll t; cin>>t;
	while(t--){
		ll n; cin>>n;
		primefactors(n);
	}
	return 0;
}

