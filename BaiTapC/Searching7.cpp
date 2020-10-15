#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	ll t, n, k;
	cin >> t;
	while(t--){
		cin >> n >> k;
		ll *a = new ll[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a,a+n);
		for(int i = n-1; i >= 0; i--){
			cout << a[i] << " ";
			k--;
			if(k == 0) break;
		}
	
		cout << endl;
	}
}

