#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	ll t;
	cin >> t;
	while(t--){
		ll n, x, max = 1;
		cin >> n;
		int a[100001] = {0};
		for(int i = 0; i < n; i++){
			cin >> x;
			if(x > max) max = x;
			a[x]++;
		}
		for(int i = 0; i <= max; i++){
			if(a[i] > 1){
				cout << i << endl;
				break;
			} 
		} 
	}
}

