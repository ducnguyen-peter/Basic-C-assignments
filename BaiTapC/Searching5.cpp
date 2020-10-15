#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	ll t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		ll *a = new ll[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a, a+n);
		cout << a[0] <<" "<< a[1] << endl;
	}
}

