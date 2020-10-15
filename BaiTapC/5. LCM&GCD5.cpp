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
main(){
	ll t, x, a, y;
	cin >> t;
	while(t--){
		cin >> a >> x >> y;
		ll m = ucln(x,y);
		for(int i = 1; i <= m; i++){
			cout << a;
		}
		cout << endl;
	}
}

