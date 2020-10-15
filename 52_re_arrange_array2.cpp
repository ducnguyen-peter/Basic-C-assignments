#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solution(ll a[], ll n)
{
	int j = 0;
	for(int i = 0; i <n; i++)
	{
		if(a[i]!=0) 
		{
			cout<<a[i]<<" ";
			j++;
		}
	}
	while(j<n)
	{
		cout<<0<<" "; j++;
	}
	cout<<endl;
}
int main()
{
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		ll a[n];
		for(int i = 0; i < n; i++) cin>>a[i];
		solution(a,n);
	}
	return 0;
}

