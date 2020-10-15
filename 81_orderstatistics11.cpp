#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solution(ll a[], ll n)
{
	ll m = *max_element(a,a+n);
	ll b[m+1];
	for(ll i = 0; i<=m+1; i++) b[i] = -1;
	for(ll i = 0; i<n; i++) b[a[i]] = a[i];
//	for(ll i = 0; i<=m+1; i++) cout<<b[i]<<" ";
	for(int i = 0; i < n; i++)
	{
		if(a[i]==m) cout<<"_ ";
		else 
		{
			int j = a[i]+1;
			while(j<=m)
			{
				if(b[j]>a[i] && b[j]!=-1) 
				{
					cout<<b[j]<<" ";
					break;
				}
				else j++;
			}
		}
	}
	cout<<endl;
}
int main()
{
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		ll a[n+1];
		for(int i = 0; i < n; i++) cin>>a[i];
		solution(a, n);
	}
	return 0;
}

