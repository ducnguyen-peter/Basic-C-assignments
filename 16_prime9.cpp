#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solution(ll n)
{
//	ll dem2 = 0;
	ll dem = 0;
	while(n%2==0)
	{
		n/=2;
		dem++;
	}
	if(dem>0) cout<<2<<" "<<dem<<" ";
	ll i = 3;
	for(; i*i<=n; i+=2)
	{
		dem = 0;
		while(n%i==0)
		{
			n/=i;
			dem++;
		}
		if(dem>0) cout<<i<<" "<<dem<<" ";
	}
	if(n>1) cout<<n<<" "<<1;
	cout<<endl;
}
int main()
{
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		solution(n);
	}
	return 0;
}

