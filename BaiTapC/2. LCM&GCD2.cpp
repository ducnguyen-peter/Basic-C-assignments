#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll bcnn(ll a, ll b){
	ll m = a*b;
	ll t;
	while(b != 0){
		t = a % b;
		a = b;
		b = t;
	}
	return m/a ;
}
main(){
	ll t, n, i;
	cin >> t;
	while(t--){
		cin >> n;
		ll ans = 1;
		for(i = 2; i <= n; i++){
			ans = bcnn(ans,i);
		}
		cout << ans << endl;
	}
}



