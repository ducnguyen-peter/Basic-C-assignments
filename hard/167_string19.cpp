#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll solution(string a, ll n)
{
	ll len = a.length();
	ll d[len][n];
	memset(d,0,sizeof(d));
	d[0][(a[0]-'0')%n]++;
	for(ll i = 1; i < len; i++)
	{
		d[i][(a[i]-'0')%n]++;
		for(ll j = 0; j < n; j++)
		{
			d[i][j] += d[i-1][j];
			d[i][(j*10+(a[i]-'0'))%n] += d[i-1][j];
		}
	}
	return d[len-1][0];
}
int main()
{
	ll t; cin>>t;
	while(t--){
		string a; ll n, k; cin>>n>>k>>a;
		cout<<solution(a, k)<<endl;
	}
	return 0;
}

