#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int t; cin>>t;
	ll a[100005] = {0};
	a[0] = 1, a[1] = 1;
	for(ll i = 2; i*i <= 100000; i++)
	{
		if(a[i]==0)
		for(ll j = i*i; j<=100000; j+=i)
		{
			a[j] = 1;
		}
	}
	while(t--){
		ll l, r; cin>>l>>r;
		ll dem = 0;
		for(int i = l; i<=r; i++)
		{
			if(a[i]==0) dem++;
		}
		cout<<dem<<endl;
	}
	return 0;
}

