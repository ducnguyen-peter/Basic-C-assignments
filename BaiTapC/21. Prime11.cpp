#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//Prime 11 

main(){
	ll t, n;
	cin >> t;
	while(t--){
		cin >> n;
		ll tong = 1, i;
		for( i = 2; i < sqrt(n); i++){
			if(n % i == 0){
				tong = tong + i + (n / i);
			}
		}
		if(i*i == n) tong = tong + i;
		if(tong == n) cout << "1\n";
	    else cout <<"0\n";
    }
}

