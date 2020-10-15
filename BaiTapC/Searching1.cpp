#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	ll t;
	cin >> t;
	while(t--){
		ll n, x;
		cin >> n;
		ll *a = new ll[n];
		cin >> x;
		int check = 0;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			if(a[i] == x){
				cout << i + 1 << " ";
				check = 1;
				break;
			} 
		}
		if(check == 0) cout << -1;
		cout << endl;
	}
}

