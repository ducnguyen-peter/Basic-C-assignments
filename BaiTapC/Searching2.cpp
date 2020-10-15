#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int searching(ll a[], ll n, ll x){
	ll C = n-1, D = 0, G = (C+D)/2;
		while(D <= C){
			if(x > a[G]) D = G + 1;
			else if(x < a[G]) C = G - 1;
			else return 1;
			G = (C+D)/2;
		}
		return -1;
}
main(){
	ll t;
	cin >> t;
	while(t--){
		ll n, x;
		cin >> n;
		cin >> x;
		ll *a = new ll[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		cout << searching(a,n,x) << endl;
	}
}

