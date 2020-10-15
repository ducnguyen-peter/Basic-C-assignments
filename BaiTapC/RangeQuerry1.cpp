#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int tong(ll a, ll b, ll s[]){
	int sum = 0;
	for(int i = a; i < b+1; i++){
		sum = sum + s[i];
	}
	return sum;
}
main(){
	ll t, n, a[1001], q, l, r;
	cin >> t;
	while(t--){
		cin >> n >> q;
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		while(q--){
			cin >> l >> r;
			cout << tong(l,r,a) << endl;
		}
	}
}

