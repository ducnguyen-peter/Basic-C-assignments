#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	ll t, n;
	cin >> t;
	while(t--){
		cin >> n;
		ll *a = new ll[n];
		for(int i = 2; i <= n; i++){
			a[i] = true;
		}
		for(int i = 2; i <= n; i++){
			if(a[i]){
				for(int j = i*2; j <= n; j = j+i){
				    a[j] = false;
			    }
			}
		}
		int check = 0;
		for(int i = 2; i <= n; i++){
			if(a[i] == true && a[n-i] == true){
				check = 1;
				cout << i << " " << n-i;
				break;
			}
		}
		if(check == 0) cout << -1;
		cout << endl;
	}
}

