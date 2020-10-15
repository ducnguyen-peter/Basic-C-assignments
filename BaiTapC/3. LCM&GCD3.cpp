#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const long long base = 1e9 + 7;

ll hx(ll a[], ll n){ //tich cac so trg mang A[]
    ll m = a[0];
	for(int i = 1; i < n; i++){
		m = (m * a[i]) % base;
	}
	return m;
}
ll ucln(ll a, ll b){
	while(b != 0){
	ll	t = a % b;
		a = b; 
		b = t;
	}
	return a;
}
ll gx(ll a[], ll n){
	ll m = a[0];
	for(int i = 1; i < n; i++){
		m = ucln(m,a[i]);
	}
	return m;
}
ll poww(ll a, ll b){ // a la he so, b la mu
    if(b == 1) return a;
    if(b == 0) return 1;
    ll x = poww(a,b/2) % base;
    if(b != 1 && b != 0){
    	if (b % 2 == 0)  return (x*x) % base;
		else return (x*x*a) % base;
	}
}
main(){
	ll t, n, a[10001];
	cin >> t;
	while(t--){
		cin >> n;
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		cout << poww(hx(a,n), gx(a,n)) << endl;
	}
}

