#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int ucln(ll a, ll b){
	while(b != 0){
		ll t = a % b;
		a = b;
		b = t;
	}
	return a;
}
main(){
	ll t, m, n, a, b;
	cin >> t;
	while(t--){
		cin >> m >> n >> a >> b;
	//	ll bcnn = (a*b) / ucln(a,b);
		ll dem = 0;
		for(int i = m; i <= n; i++){
			if(i % a == 0 || i % b == 0) dem++;
		}
		cout << dem << endl;
	}
}

