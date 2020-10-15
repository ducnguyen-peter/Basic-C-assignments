#include<bits/stdc++.h>
#include<map>
using namespace std;
typedef long long ll;
vector<pair<ll, ll> > p;
bool compare(pair<ll, ll> a, pair<ll, ll> b)
{
	return a.second<b.second;
}
void solution(ll a[], ll n, ll x)
{
	for(ll i = 0; i < n; i++)
	{
		p[i].first = a[i];
		p[i].second = abs(x-a[i]);
	}
	sort(p.begin(), p.end(), compare);
	for(int i = 0; i < p.size(); i++) cout<<p[i].first<<" ";
	cout<<endl;
}
int main()
{
	int t; cin>>t;
	while(t--){
		p.clear();
		ll n, x; cin>>n>>x;
		ll a[n+1];
		for(ll i = 0; i < n; i++) cin>>a[i];
		solution(a, n, x);
	}
	return 0;
}

