#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll solution(ll a, ll b, ll c)
{
	if(b==0) return 0;
	if(b==1) return a%c;
	ll x = solution(a,b/2,c)%c;
	if(b%2) return (2*x%c+a%c)%c;
	else return (2*x%c)%c;
}
int main()
{
	int t; cin>>t;
	while(t--){
		ll a, b, c;
		cin>>a>>b>>c;
		cout<<solution(a,b,c)<<endl;
	}
	return 0;
}

