#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ucln(ll a, ll b){
	while(b != 0){
		ll t = a % b;
		a = b;
		b = t;
	}
	return a;
}
void xuli(){
	    ll x, y, z, n;
	    cin >> x >> y >> z >> n;
		ll l = 1, r = 9;
		for(ll i = 0; i < n-1; i++){ // tim khoang co n cs
			 l *= 10;
			 r = r * 10 + 9;
		}
		x = x * y / ucln(x, y);   // tim bcnn 
		y = x * z / ucln(x, z);
		if(l % y == 0) cout << l;
		else{
			ll m = 1 + (l / y);
			if(m * y > r)  cout << -1;
			else cout << (m * y); 
		}
		cout << endl;
}
main(){
	ll t;
	cin >> t;
	while(t--){
		xuli();
	}
}

