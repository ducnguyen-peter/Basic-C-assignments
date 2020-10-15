#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
main(){
	ll t, n, p;
	cin >> t;
	while(t--){
		cin >> n >> p;
		ll dem = 0;
		for(int i = 1; i <= n; i++){
			int j = i;
			while(j % p == 0){
				dem ++;
				j = j / p;
			}
		}
		cout << dem << endl;
	}
}
