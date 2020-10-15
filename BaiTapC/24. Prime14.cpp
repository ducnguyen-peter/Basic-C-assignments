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
		for(int i = 2; i <= sqrt(n); i++){
			if(x[i]){
				for(int j = i * i; j <= n; j = j + i){
				   x[j] = 0;
			    }
			}
			
		}
		for(int i = 2; i <= sqrt(n); i++){
			if(x[i]){
				cout << i << " ";
			}
		}
		cout << endl;
	}
}

