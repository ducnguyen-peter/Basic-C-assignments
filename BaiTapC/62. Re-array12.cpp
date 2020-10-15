#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	ll t, n, a[1001];
	cin >> t;
	while(t--){
		cin >> n;
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		ll max = a[0];
		for(int i = 0; i < n-1; i++){
			ll tich = a[i];
			for(int j = i+1; j < n; j++){
				tich = tich * a[j];
				if(tich > max){
					max = tich;
				}
			}
		}
		cout << max << endl;
	}
}

