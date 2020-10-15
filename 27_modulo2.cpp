#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//dequy(TLE)
ll solrecur(ll a, ll m, ll k)
{
	if((m*k+1)%a==0&&(m*k+1)/a<m) return (m*k+1)/a;
	else solrecur(a,m,k+1);
}
//loop(TLE)
ll solloop(ll a, ll m)
{
	ll k = 0;
	while(true)
	{
		if((m*k+1)%a==0&&(m*k+1)/a<m) return (m*k+1)/a;
		k++;
	}
}
void sol(ll a, ll m)
{
	ll res=-1;
	for(ll i=1;i<m;i++){
		if((a*i)%m==1){
			res=i;
			break;
		}
	}
	cout<<res<<endl;
}
int main()
{
	int t; cin>>t;
	while(t--){
		ll a, m; cin>>a>>m;
		sol(a,m);
	}
	return 0;
}

