#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll d[1000000];
ll no(ll a[], ll n) 
{ 
    ll max1 = INT_MIN, max2 = 0; 
    for (ll i = 0; i < n; i++) 
    { 
        max2 = max2 + a[i]; 
        if (max1 < max2) 
            max1 = max2; 
  
        if (max2 < 0) 
            max2 = 0; 
    } 
    return max1; 
} 
ll solution(ll a[], ll n)
{
	ll ans = a[0], s = 0;
	for(ll i = 0; i < n; i++)
	{
		s+=a[i];
		ans = max(ans, s);
		if(s<0) s = 0;
	}
	return ans;
}
int main()
{
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		ll a[n+1];
		for(int i = 0; i < n; i++) cin>>a[i];
		cout<<no(a, n)<<endl;
	}
	return 0;
}

