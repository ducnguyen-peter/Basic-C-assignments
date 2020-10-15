#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a, ll b)
{
	if(b==0)
		return a;
	else return gcd(b,a%b);
}
int main()
{
	int t; cin>>t;
	while(t--){
		ll a; string b;
		cin>>a>>b;
		ll s = 0;
		for(int i = 0; i < b.size(); i++)
			s=(s*10+(b[i]-'0'))%a;
		cout<<gcd(a,s)<<endl;
	}
	return 0;
}

