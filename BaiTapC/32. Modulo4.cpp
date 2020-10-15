#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	ll t, n, k;
	cin >> t;
	while(t--){
		cin >> n >> k;
		ll sum = 0;
		for(int i = 1; i <= n; i++){
			sum = sum + i % k;
		}
		if(sum == k) cout << "1\n";
		else cout << "0\n";
	}
}

