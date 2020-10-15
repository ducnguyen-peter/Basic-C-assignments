#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		ll a[n+1];
		for(int i = 0; i < n; i++) cin>>a[i];
		cout<<*max_element(a, a+n)<<endl;
	}
	return 0;
}

