#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	ll t;
	cin >> t;
	while(t--){
		string n;
		ll m;
	    cin >> n >> m;
	    ll mod = 0;
	    for(int i = 0; i < n.size(); i++){
		    mod = (mod * 10 + (n[i] - '0')) % m;
	    }
	    cout << mod << endl;
	}	
}

