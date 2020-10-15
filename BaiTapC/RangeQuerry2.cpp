#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int snt(ll n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return 1;
}
main(){
	ll t, l , r;
	cin >> t;
	while(t--){
		cin >> l >> r;
		int dem = 0;
		for(int i = l; i <= r; i++){
			if(snt(i)) dem++;
		}
		cout << dem << endl;
	}
}

