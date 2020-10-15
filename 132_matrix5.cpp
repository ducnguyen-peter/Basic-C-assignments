#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[100][100];
ll solution(int n)
{
	ll sumrow[n], sumcol[n];
	memset(sumrow, 0, sizeof(sumrow));
	memset(sumcol, 0, sizeof(sumcol));
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			sumrow[i]+=a[i][j];
			sumcol[j]+=a[i][j];
		}
	}
	ll maxsum = 0;
	for(int i = 0; i < n; i++)
	{
		maxsum = max(maxsum, sumrow[i]);
		maxsum = max(maxsum, sumcol[i]);
	}
	int count = 0;
	for(int i = 0, j = 0; i < n, j < n;)
	{
		int diff = min(maxsum - sumrow[i], maxsum - sumcol[j]);
		a[i][j]+=diff;
		sumrow[i]+=diff;
		sumcol[j]+=diff;
		count+=diff;
		if(sumrow[i]==maxsum) i++;
		if(sumcol[j]==maxsum) j++;
	}
	return count;
}
int main()
{
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		for(ll i = 0; i < n; i++)
		{
			for(ll j = 0; j < n; j++)
				cin>>a[i][j];
		}
		cout<<solution(n)<<endl;
	}
	return 0;
}

