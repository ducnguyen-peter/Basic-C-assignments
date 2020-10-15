#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	ll t, a, m;
	cin >> t;
	while(t--){
		cin >> a >> m;
		bool check = true;
		for(int i = 0; i < m; i++){
			if((i*a) % m == 1){
				check = false; 
				cout << i << endl;
				break;
			}
		}
		if(check) cout << "-1\n";
	}
}


