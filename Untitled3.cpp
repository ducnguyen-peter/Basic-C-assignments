#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool isPrime(ll n)
{
	if(n<2) return 0;
	if(n==2) return 1;
	for(ll i = 2; i*i <= n; i++)
		if(n%i==0) return 0;
	return 1;
}
int main()
{
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		for(ll i = n-1; i >= 2; i--)
			if(isPrime(i)) cout<<i<<" ";
		cout<<endl;
	}
	return 0;
}

