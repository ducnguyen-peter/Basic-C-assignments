#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[1001];
void fibo(){
	a[0] = 0;
	a[1] = a[2] = 1;
	for(int i = 3; i <= 92; i++){
		a[i] = a[i-1] + a[i-2];
	}
}

bool check(ll n){
	for(int i = 0; i <= 92; i++){
		if(a[i] == n) return true;
	}
	return false;
}
main(){
	fibo();
	ll t, n;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i = 0; i < n; i++){
			ll x;
			cin >> x;
			if(check(x)) cout << x << " ";
		}
		cout << endl;
	}
}

