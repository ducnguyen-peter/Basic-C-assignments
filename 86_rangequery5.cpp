#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll maxele(ll a[], ll l, ll r)
{
	ll ans = 0, index = 0;
	for(int i = l; i <=r; i++)
	{
		if(ans<a[i])
		{
			ans = a[i];
			index = i;
		}
	}
	return index;
}
ll no(ll a[], ll n)
{
	if(n==1) return 0;
	ll next = 0, dem = 0, i = 0;
	while(i<n)
	{
		if(i+a[i]>=n-1) return dem+1;
		i = maxele(a, i + 1, i + a[i]);
		dem++;
	}
	return dem+1;
}
ll solution(ll a[], ll n) 
{
    if (n <= 1) 
        return 0; 
    if (a[0] == 0) 
        return -1; 
    ll maxReach = a[0]; 
    ll step = a[0]; 
    ll jump = 1; 
    ll i = 1; 
    for (i = 1; i < n; i++) { 
        if (i == n - 1) 
            return jump; 
        maxReach = max(maxReach, i + a[i]); 
        step--; 
        if (step == 0) { 
            jump++; 
            if (i >= maxReach) 
                return -1; 
            step = maxReach - i; 
        } 
    } 
    return -1; 
}
int main()
{
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		ll a[n+1];
		for(ll i = 0; i < n; i++) cin>>a[i];
		cout<<solution(a, n)<<endl;
	}
	return 0;
}

