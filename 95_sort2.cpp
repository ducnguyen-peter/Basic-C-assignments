#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct so{
	ll i;
	ll a;
	ll ab;
};
bool cmp(so a, so b)
{
	return a.ab<b.ab;
}
int main()
{
	int t; cin>>t;
	while(t--){
		ll n,x; cin>>n>>x;
		so a[n];
		for(ll i = 0; i < n; i++) 
		{
			a[i].i = i;
			cin>>a[i].a;
			a[i].ab = abs(x-a[i].a);	
		}
		stable_sort(a, a + n, cmp);
		for(ll i = 0; i < n; i++) cout<<a[i].a<<" ";
		cout<<endl;
	}
	return 0;
}

