#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	ll t;
	cin >> t;
	while(t--){
		ll b, p;
		cin >> b >> p;
		int dem = 0;
		for(int i = 1; i <= b; i++){
			if((i*i)% p == 1){
				if(i/p > i){
					dem = dem + 2;
				}
				else dem = dem + 1;
			}
		}
		cout << dem << endl;
	}
}

