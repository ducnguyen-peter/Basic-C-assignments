#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod(ll a, ll b, ll c){
	if(b == 0) return 1;
	if(b == 1) return a % c;
	ll x = mod(a, b/2, c) % c;
	if(b % 2 == 0){
		return (x*x) % c;
	}
	return (((x*x) % c)*a) % c;
}
main(){
	ll b, m, t;
	cin >> t;
	while(t--){
		string a;
		cin >> a >> b >> m;
		ll s = 0;
		for(int i = 0; i < a.size(); i++){
			s = (s * 10 + (a[i] - '0')) % m;
		}
		cout << mod(s, b, m) << endl;
	}
}

