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
	    ll tong = (n*(n+1))/2;
	    for(int i = 0; i < n-1; i++){
		    cin >> a[i];
		    tong = tong - a[i];
	    }
	    cout << tong << endl;
	}	
}

