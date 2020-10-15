#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void smallestprime(ll n)
{
	if(n==1)
	{
		cout<<1;
		return;
	}
	if(n%2==0) 
	{
		cout<<2;
		return;
	}
	for(int i = 3; i<=n; i+=2)
	{
		if(n%i==0)
		{
			cout<<i;
			return;
		}
	}
	if(n>1) cout<<n;
}
int main()
{
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		for(int i = 1; i<=n; i++)
		{
			smallestprime(i);
			cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}

