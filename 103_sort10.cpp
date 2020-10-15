#include<bits/stdc++.h>
#include<set>
using namespace std;
typedef long long ll;
void solution(ll a[], ll n)
{
	set<ll> set;
	for(ll i = 0; i < n; i++)
	{
		ll x = a[i];
		while(x>0)
		{
			if(set.find(x%10)==set.end()) set.insert(x%10);
			x/=10;
		}
	}
	for(std::set<ll>::iterator i = set.begin(); i != set.end(); i++) cout<<*i<<" ";
	cout<<endl;
}
int main()
{
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		ll a[n];
		for(ll i = 0; i < n; i++) cin>>a[i];
		solution(a, n);
	}
	return 0;
}

