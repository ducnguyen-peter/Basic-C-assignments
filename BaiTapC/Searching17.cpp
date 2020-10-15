#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int compare(ll a, ll b){
	return a > b;
}
main(){
	ll t, n, k;
	cin >> t;
	while(t--){
		cin >> n >> k;
		ll *a = new ll[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a, a+n, compare);
		cout << a[k] << endl;
	}
}

