#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	ll t, n;
	cin >> t; 
	while(t--){
		cin >> n;
		ll k = sqrt(n);
		int *x = new int[k];
		for(int i = 2; i <= k; i++){
			x[i] = 1;
		}
		for(int i = 2; i <= sqrt(k); i++){
			if(x[i]){
				for(int j = i * i; j <= k; j = j + i){
				   x[j] = 0;
			    }
			}
			
		}
		ll dem = 0;
		for(int i = 2; i <= k; i++){
			if(x[i]){
				//cout << i*i << " ";
				dem ++;
			}
		}
		cout << dem <<  endl;
	}
}

