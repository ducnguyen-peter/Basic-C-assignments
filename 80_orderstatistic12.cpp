#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll d[1005];
ll no(ll a[], ll b[], ll n, ll m)
{
	ll ans = 0, sum = 0;
	if(n<=m)
	{
		d[0] = a[0];
		for(ll i = 1; i < n; i++) 
			d[i] = d[i-1] + a[i];
		for(ll i = 0; i < n; i++)
			for(ll j = i + 1; j < m; j++)
				d[i]+=b[j];
	}
	else
	{
		d[0] = b[0];
		for(ll i = 1; i < m; i++) d[i] = d[i-1] + b[i];
		for(ll i = 0; i < m; i++)
			for(ll j = i + 1; j < n; j++)
				d[i]+=a[j];
	}
	return *max_element(d, d + n);
}
ll solution(ll a[], ll b[], ll n, ll m) 
{ 
    ll  result = 0, sum1 = 0, sum2 = 0; 
	ll i = 0, j = 0; 
    while (i < n && j < m) 
    { 
        if (a[i] < b[j]) 
            sum1 += a[i++]; 
        else if (a[i] > b[j]) 
            sum2 += b[j++]; 
  
        else  
        { 
            result += max(sum1, sum2); 
            sum1 = 0, sum2 = 0; 
            while (i < n &&  j < m && a[i] == b[j]) 
            { 
                result = result + a[i++]; 
                j++; 
            } 
        } 
    } 
    while (i < n) 
        sum1  +=  a[i++]; 
    while (j < m) 
        sum2 +=  b[j++]; 
    result +=  max(sum1, sum2); 
    return result; 
} 
int main()
{
	int t; cin>>t;
	while(t--){
		ll n, m; cin>>n>>m;
		ll a[n+1], b[m+1];
		for(ll i = 0; i < n; i++) cin>>a[i];
		for(ll i = 0; i < m; i++) cin>>b[i];
		cout<<no(a, b, n, m)<<endl;
	}
	return 0;
}

