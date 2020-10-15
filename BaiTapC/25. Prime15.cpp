#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	ll t, n;
	cin >> t;
	while(t--){
		cin >> n;
		int x[n];
		for(int i = 2; i <= n; i++){
			x[i] = 1;
		}
		for(int i = 2; i <= n; i++){
			if(x[i] == 1){
				x[i] = i;
				for(int j = i*i; j <= n; j = j + i){
					if(x[j] == 1){
						x[j] = i;
					}
				}
			}
		}
		cout <<"1 ";
		for(int i = 2; i <= n; i++){
			cout << x[i] << " ";
		}
		cout << endl;
	}
}

