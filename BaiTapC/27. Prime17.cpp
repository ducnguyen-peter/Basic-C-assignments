#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	ll t, l, r;
	cin >> t; 
	while(t--){
		cin >> l >> r;
		ll k = sqrt(r);
		int *x = new int[k+7];
		for(int i = 2; i <= k; i++){
			x[i] = 1;
		}
		for(int i = 2; i <= sqrt(k); i++){
			if(x[i]){
				for(int j = i*i; j <= k; j = j+i){
				   x[j] = 0;
			    }
			}
			
		}
		ll dem = 0;
		for(int i = l; i <= k; i++){
			if(x[i]){
				//cout << i*i << " ";
				dem ++;
			}
		}
		cout << dem <<  endl;
	}
}


