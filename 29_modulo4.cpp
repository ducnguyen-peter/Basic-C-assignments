#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int t; cin>>t;
	while(t--){
		ll n,k; cin>>n>>k;
		ll res = n*(n+1)/2;
		if(res==k) cout<<1;
		else cout<<0;
		cout<<endl;
	}
	return 0;
}

