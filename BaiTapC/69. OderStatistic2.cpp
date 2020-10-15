#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	ll t, n, a[10001], k;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a, a+n);
		cout << a[n-1] << endl;
	}
}

