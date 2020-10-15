#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll; 
  
int findCountOfSolutions(int n, int p) 
{ 
    ll ans = 0; 
    for (ll x=1; x<p; x++) 
    { 
        if ((x*x)%p == 1) 
        { 
            ll last = x + p * (n/p); 
            if (last > n) 
                last -= p;
            ans += ((last-x)/p + 1); 
        } 
    } 
    return ans; 
} 
int main() 
{ 
	ll t; cin>>t;
	while(t--)
	{
    	ll n, p; cin>>n>>p; 
    	cout<<findCountOfSolutions(n, p); 
    }
    return 0; 
} 

