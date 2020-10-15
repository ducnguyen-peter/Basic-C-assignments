#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	ll t, n;
	cin >> t;
	while(t--){
		ll a[1001], b[1001];
		cin >> n;
  		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a,a+n);
		ll d = 0, c = n-1, x = 0;
		while(d <= c){
			b[x] = a[c];
			b[x+1] = a[d];
			d++;
			c--;
			x = x+2;
		}
	    for(int i = 0; i < n; i++){
	    	cout << b[i] << " ";
		}
		cout << endl;
	}
}

