#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll lcm(ll a, ll b)
{
	if(b==0) return a;
	else return lcm(b, a%b);
}
int main()
{
	int t; cin>>t;
	while(t--){
		ll a, b;
		cin>>a>>b;
		cout<<a*b/lcm(a,b)<<" "<<lcm(a,b)<<endl;
	}
	return 0;
}

