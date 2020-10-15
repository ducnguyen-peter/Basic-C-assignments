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
	ll t, n, m;
	cin >> t;
	while(t--){
		cin >> n >> m;
		ll sum = n * (n + 1) / 2; // tinh tong 1+2+...+n
		ll x = (sum + m) / 2;     // giai he pt a + b = sum; a - b = m;(a, b la tong cac day con)
		ll y = sum - x;
		if(x*2 != (sum + m) || x < 0 || y < 0) cout << "No\n";
		else{
			if(ucln(x,y) == 1) cout << "Yes\n";
			else cout << "No\n";
		}
	}
}

