#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod(ll a, ll b, ll c){
	if(b == 0) return 1;
	if(b == 1) return a;
	ll x = mod(a, b/2, c) % c;
	if(b % 2 == 0){
		return (x*x) % c;
	}
	return (((x*x) % c)*a) % c;
}
main(){
	ll t, x, y, p;
	cin >> t;
	while(t--){
		cin >> x >> y >> p;
		cout << mod(x, y, p) << endl;
	}
}

