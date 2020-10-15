#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int t; cin>>t;
	bool a[1000005] = {0};
	a[1] = 1; a[0] = 1;
	for(ll i = 2; i*i<=1000000; i++)
	{
		if(a[i]==0)
		for(ll j = i*i; j<=1000000; j+=i)
		a[j] = 1;
	}
	while(t--){
		ll n; cin>>n;
		ll i = 2;
		for(; i < n; i++)
		{
			if(a[i]==0&&a[n-i]==0)
			{
				cout<<i<<" "<<n-i<<endl;
				break;
			}
		}
		if(i==n) cout<<-1<<endl;
	}
	return 0;
}

